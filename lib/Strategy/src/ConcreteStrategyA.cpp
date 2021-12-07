#include "../include/Strategy/ConcreteStrategyA.hpp"
#include <iostream>


ConcreteStrategyA::ConcreteStrategyA() {};

ConcreteStrategyA::~ConcreteStrategyA() {};

void ConcreteStrategyA::execute() const {
    std::cout << "Executing Concrete Strategy A!!" << std::endl;
};