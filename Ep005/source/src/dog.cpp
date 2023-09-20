#include "dog.h"
#include <iostream>

Dog::Dog(std::string name_param): dog_name(name_param)
{
    std::cout << "Constructor for dog " << dog_name << " called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Deconstructor for dog " << dog_name << " called." << std::endl;
}