#include <sstream>
#include "async.h"

namespace async {

    handle_t connect(std::size_t bulk) {
        return new StateMachine(bulk);
    }

    void receive(handle_t handle, const char *data, std::size_t size) {
        std::stringstream ss;
        ss.write(data, size);
        for (std::string line; std::getline(ss, line);) {
            handle->push_command(line);
        }
    }

    void disconnect(handle_t handle) {
        delete handle;
    }

}
