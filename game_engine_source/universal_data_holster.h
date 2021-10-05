// @author Erik Baker
// @date 10/4/2021
// @brief define indexed static class storage 

template <typename T, unsigned index>
static T& data()
{
    static T _data;
    return _data;
}
