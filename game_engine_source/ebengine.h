// @author Erik Baker
// @date 10/4/2021
// @brief define the engine template
#pragma once

#include <iostream>
#include "log_util.h"
#include "callback.h"

template <unsigned ID, typename ... Types>
class ebengine : Types...
{
public:

ebengine() : return_code(0)
{
    log("ebengine constructor");

}

void Update()
{
    log("ebengine Update");
}

int operator()()
{
    log("ebengine operator()");

    return return_code;
}



~ebengine()
{
    log("ebengine destructor");
}


private:
int return_code;
};
