#pragma once

#include <cstddef>
#include "state_machine.h"

namespace async {

    using handle_t = StateMachine;

    handle_t connect(std::size_t bulk);
    void receive(handle_t handle, const char *data, std::size_t size);
    void disconnect(handle_t handle);
}
