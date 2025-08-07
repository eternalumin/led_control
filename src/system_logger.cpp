#include "system_logger.h"

void SystemLogger::log(const char *msg) {
    printf("[LOG]: %s\n", msg);
}
