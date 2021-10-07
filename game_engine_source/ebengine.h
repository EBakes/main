// @author Erik Baker
// @date 10/4/2021
// @brief define the engine template


#include <iostream>
#include "log_util.h"

template <typename ... Types>
class ebengine : Types...
{
public:

ebengine()
{
    log("ebengine constructor");
}

~ebengine()
{

}

private:

};
