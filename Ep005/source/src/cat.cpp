#include "cat.h"

Cat::Cat(const std::string &name, const int &age)
    : catName(name), catAge(age)
{
    std::cout << "Constructor of cat [ " << catName << " ] called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Deconstructor of cat [ " << catName << " ] called" << std::endl;
}

std::string Cat::getCatName() const
{
    return catName;
}

int Cat::getCatAge() const
{
    return catAge;
}

void Cat::setCatName(const std::string &name)
{
    catName = name;
}

void Cat::setCatAge(const int &age)
{
    catAge = age;
}

void Cat::printInfo() const
{
    std::cout << "Name: " << catName << "\n"
              << "Age: " << catAge << std::endl;
}