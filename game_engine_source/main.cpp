// @author Erik Baker
// @date 10/4/2021
// @brief program start - launch engine in working directory

#include "main.h"




#define Engine_ID 0

int main(int argc, char const *argv[])
{
    log("main program started");

    return data<ebengine<Engine_ID, DataPool, Window, sandbox> , Engine_ID>()();
}
