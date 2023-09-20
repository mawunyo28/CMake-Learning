#include <iostream>
#include <concepts>
#include "Entity.h"

template <typename T>
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

template <typename A>
    requires std::integral<A>
A subtract(A a, A b)
{
    return a - b;
}

template <typename B>
    requires std::integral<B>
extern B modulus(B a, B b)
{
    return a % b;
}

int main()
{

    std::cout << "Hello from C++ 20 with CMake on Linux/Windows" << std::endl;
    std::cout << "The sum is : " << add(7, 5) << std::endl;
    std::cout << "The difference is : " << subtract(7, 5) << std::endl;
    std::cout << "The mod quotient is : " << modulus(7, 5) << std::endl;

    Entity entity(0, 0, 1, "Cherno");
    std::cout << entity.GetName() << " is at a speed of " << entity.GetSpeed() 
    <<" with an x pos of " << entity.GetPos().first << " and a y pos of "  
    << entity.GetPos().second << std::endl;

    return 0;
}
