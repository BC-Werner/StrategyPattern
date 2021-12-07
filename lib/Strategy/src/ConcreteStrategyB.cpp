#include <iostream>
#include "../include/Strategy/ConcreteStrategyB.hpp"

ConcreteStrategyB::ConcreteStrategyB() {};
ConcreteStrategyB::~ConcreteStrategyB() {};

void ConcreteStrategyB::execute() const {
    std::cout << "Executing Concrete Strategy B!!" << std::endl;
}