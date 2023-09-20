#include <iostream>
#include "cat.h"
#include "operations.h"

int main()
{
    Cat esi("esi", 7);
    esi.printInfo();

    std::cout << "Sum of 11 and 22 = " << add(11, 22) << std::endl;
    std::cout << "Difference of 11 and 22 = " << subtract(11, 22) << std::endl;
    std::cout << "Quotient of 11 and 22 = " << divide(11, 22) << std::endl;
    std::cout << "Product of 11 and 22 = " << product(11, 22) << std::endl;

    esi.setCatAge(6);
}