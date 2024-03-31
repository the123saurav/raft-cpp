#include "logging.h"

int main() {
    auto& lg = maelstrom::core::get_logger();
    lg.log("Hell\n");
    return 0;
}