/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _THRIFT_CONCURRENCY_THREAD_H_
#define _THRIFT_CONCURRENCY_THREAD_H_ 1

#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

namespace apache::thrift::concurrency {

class Thread;

/**
 * Minimal runnable class.  More or less analogous to java.lang.Runnable.
 *
 * @version $Id:$
 */
class Runnable {
 public:
  virtual ~Runnable() {}
  virtual void run() = 0;

  /**
   * Gets the thread object that is hosting this runnable object  - can return
   * an empty std::shared pointer if no references remain on the thread object
   */
  virtual std::shared_ptr<Thread> thread() const { return thread_.lock(); }

  /**
   * Sets the thread that is executing this object.  This is only meant for
   * use by concrete implementations of Thread.
   */
  virtual void thread(std::shared_ptr<Thread> value) { thread_ = value; }

 private:
  std::weak_ptr<Thread> thread_;
};

enum PRIORITY {
  HIGH_IMPORTANT,
  HIGH,
  IMPORTANT,
  NORMAL,
  BEST_EFFORT,
  N_PRIORITIES
};

/**
 * Minimal thread class. Returned by thread factory bound to a Runnable object
 * and ready to start execution.  More or less analogous to java.lang.Thread
 * (minus all the thread group, priority, mode and other baggage, since that
 * is difficult to abstract across platforms and is left for platform-specific
 * ThreadFactory implementations to deal with
 *
 * @see apache::thrift::concurrency::ThreadFactory)
 */
class Thread {
 public:
  using id_t = uint64_t;

  virtual ~Thread() {}

  /**
   * Starts the thread. Does platform specific thread creation and
   * configuration then invokes the run method of the Runnable object bound
   * to this thread.
   */
  virtual void start() = 0;

  /**
   * Join this thread. Current thread blocks until this target thread
   * completes.
   */
  virtual void join() = 0;

  /**
   * Gets the thread's platform-specific ID
   */
  virtual id_t getId() = 0;

  /**
   * Gets the runnable object this thread is hosting
   */
  virtual std::shared_ptr<Runnable> runnable() const { return _runnable; }

  /**
   * Sets thread name for debugging purposes after the thread was created.
   * Returns true on success.
   */
  virtual bool setName(const std::string& /*name*/) { return false; }

  /**
   * Returns the CPU time consumed by the thread. Requires support for
   * thread-specific clocks. Returns 0 if not supported.
   */
  virtual std::chrono::nanoseconds usedCpuTime() const {
    return std::chrono::nanoseconds(0);
  }

 protected:
  virtual void runnable(std::shared_ptr<Runnable> value) { _runnable = value; }

 private:
  std::shared_ptr<Runnable> _runnable;
};

/**
 * Factory to create platform-specific thread object and bind them to Runnable
 * object for execution
 */
class ThreadFactory {
 public:
  enum DetachState {
    ATTACHED,
    DETACHED,
  };

  virtual ~ThreadFactory() {}
  virtual std::shared_ptr<Thread> newThread(
      const std::shared_ptr<Runnable>& runnable) const = 0;

  virtual std::shared_ptr<Thread> newThread(
      const std::shared_ptr<Runnable>& runnable,
      DetachState detachState) const = 0;

  /**
   * Gets the current thread id or unknown_thread_id if the current thread is
   * not a thrift thread
   */

  static const Thread::id_t unknown_thread_id;

  virtual Thread::id_t getCurrentThreadId() const = 0;
};

} // namespace apache::thrift::concurrency

#endif // #ifndef _THRIFT_CONCURRENCY_THREAD_H_
