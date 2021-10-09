// @author Erik Baker
// @date 10/4/2021
// @brief define the engine template
#pragma once

#include <iostream>
#include "log_util.h"

template <typename ... Types>
class ebengine : Types...
{
public:

ebengine() : return_code(0)
{
    log("ebengine constructor");
}

~ebengine()
{
    log("ebengine destructor");
}

int exit_code()
{
    log("return shutdown code");
    return return_code;
}

private:
int return_code;
};
