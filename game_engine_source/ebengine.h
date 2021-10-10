// @author Erik Baker
// @date 10/4/2021
// @brief define the engine template
#pragma once

#include <iostream>
#include "log_util.h"
#include "callback.h"

template <typename ... Types>
class ebengine : Types...
{
public:

ebengine() : return_code(0)
{
    log("ebengine constructor");

}

void Update(float dt)
{
    (void)dt;
}

int operator()()
{
    log("ebengine operator()");

    register_callback<ebengine>(0.01f, Update);

    return return_code;
}



~ebengine()
{
    log("ebengine destructor");
}


private:
int return_code;
};
