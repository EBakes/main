// @author Erik Baker
// @date 10/8/2021
// @brief define window class and functions
#pragma once

#include "log_util.h"


class Window
{
    public:

    Window()
    {
        log("Window constructor");        
    }

    void operator()()
    {
        log("Window operator()");
    }

    ~Window()
    {
        log("Window destructor");
    }


    private:

};
