// @author Erik Baker
// @date 10/12/2021
// @brief implement c++ reccomended introspection strategy
#include <type_traits>

template <class CheckingType> 
struct container
{
private:
    template <class TypeToCheck>
    constexpr auto test_validity(int ) -> decltype(std::declval<CheckingType>()(std::declval<TypeToCheck>()), bool())
    {
        return true;
    }

    template <class Param>
    constexpr bool test_validity(...) 
    { 
        return false; 
    } 

public:
    template <class TypeToCheck>
    constexpr bool operator()(const TypeToCheck& p) 
    {
        return test_validity<TypeToCheck>(int());
    }
};

template <class CheckingType>
constexpr container<CheckingType> is_valid(const CheckingType& t)
{
    return container<CheckingType>();
}

// examples
//std::cout << "is valid:" << ((has_serialize(class_with_serialize()))? "has serialize" : "doesn't have serialize"); 

//has_serialize(42);
//if constexpr (has_serialize(42))
//{
//    log("42 has cerealize")
//}
//else
//{
//    log("42 has no cereal");
//}
//
//if constexpr (has_serialize(class_with_serialize()))
//{
//    log("class w/serialize");
//}
//else
//{
//    log("no serializE");
//}
//        


static auto has_serialize = is_valid([](auto x) -> decltype(x.serialize()) { });
