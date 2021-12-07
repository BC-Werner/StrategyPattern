#include "../include/Strategy/ConcreteStrategy.hpp"
#include <iostream>


ConcreteStrategy::ConcreteStrategy()
{
}

ConcreteStrategy::~ConcreteStrategy()
{
}

void ConcreteStrategy::execute() const
{
    std::cout << "Executing ConcreteStrategy!!" << std::endl;
}