#pragma once
#include <registers.hpp>
typedef struct _line
{
    uint8_t numargs;
    uint8_t command;
    void** args;
} line;