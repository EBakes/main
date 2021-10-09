// @author Erik Baker
// @date 10/4/2021
// @brief program start - launch engine in working directory

#include "main.h"

int main(int argc, char const *argv[])
{
    /* code */
    log("program started");

    data<ebengine<Window> , 0>();

    return data<ebengine<Window>, 0>().exit_code();
}
