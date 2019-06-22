#include "async.h"

int main() {
    Logger::get().add_handler<ConsoleHandler>();

    async::handle_t handler = async::connect(2);
    async::receive(handler, "1\n2\n3\n", 6);
    async::receive(handler, "1\n3", 3);
    async::receive(handler, "\n4\n", 3);
    async::disconnect(handler);

    return 0;
}
