#pragma once
#include <iostream>
#include <string>

class Cat
{
private:
    std::string catName{};
    int catAge{};

public:
    explicit Cat(const std::string &catName, const int &age);
    ~Cat();

    Cat() = delete;

    std::string getCatName() const;
    int getCatAge() const;

    void setCatName(const std::string &name);
    void setCatAge(const int &age);

    void printInfo() const;
};