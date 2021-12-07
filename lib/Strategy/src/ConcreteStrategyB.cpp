#include <iostream>
#include "../include/Strategy/ConcreteStrategyB.hpp"

ConcreteStrategyB::ConcreteStrategyB() {};
ConcreteStrategyB::~ConcreteStrategyB() {};

void ConcreteStrategyB::execute() const {
    std::cout << "Executing ConcreteStrategy B!!" << std::endl;
}