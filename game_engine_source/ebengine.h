// @author Erik Baker
// @date 10/4/2021
// @brief define the engine template
#pragma once

#include <iostream>
#include "log_util.h"
#include "callback.h"

enum engine_states
{
    shutdown,
    running
};

template <unsigned ID, typename ... Types>
class ebengine : Types...
{
public:

ebengine() : engine_state(running)
{
    log("ebengine constructor");

}

int operator()()
{
    log("ebengine operator()");

    while (engine_state == running)
    {
        // state machine call update
        engine_update();
    }

    return engine_state;
}

~ebengine()
{
    log("ebengine destructor");
}


private:

    void engine_update()
    {
        log("engine update");
    
        if (--engine_kill_timer < 0)
        {
            engine_state = shutdown;
        }

        /*
            put more things here once window management is done
        */


    }


    int engine_state;

    int engine_kill_timer = 100;
};
