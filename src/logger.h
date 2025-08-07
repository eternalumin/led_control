#ifndef SYSTEM_LOGGER_H
#define SYSTEM_LOGGER_H

#include "mbed.h"

class SystemLogger {
public:
    static void log(const char *msg);
};

#endif
