// @author Erik Baker
// @date 10/5/2021
// @brief define log utility macro
#pragma once

#include <iostream>

void log(const char * str)
{
    static unsigned counter = 0;
    std::cout <<"Debug Message " <<  counter++ <<": "<< str << std::endl;
}