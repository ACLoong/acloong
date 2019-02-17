#ifndef TEST_TIME_TOOL_HPP
#define TEST_TIME_TOOL_HPP

#include <chrono>

namespace ac {

class time_tool {
public:

  static uint64_t current_time() {
    auto since_epoch =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch());

    return static_cast<uint64_t>(since_epoch.count());
  }

};

} // namespace ac

#endif //TEST_TIME_TOOL_HPP
