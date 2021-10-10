// @author Erik Baker
// @date 10/9/2021
// @brief create framework for functionality through callbacks
#pragma once

#include "log_util.h"

template <typename T>
void register_callback(float time_between_callbacks, void(T::*)(float))
{
    log("callback registered");

    // launch thread to call function 
}