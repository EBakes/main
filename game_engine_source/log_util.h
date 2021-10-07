// @author Erik Baker
// @date 10/5/2021
// @brief define log utility macro
#pragma once
#include <iostream>

void log(const char * str)
{
    std::cout <<"Debug Message " <<  __COUNTER__ <<": "<< str << std::endl;
}