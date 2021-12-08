#include <iostream>
#include <ConcreteStrategyB.hpp>

ConcreteStrategyB::ConcreteStrategyB() {};
ConcreteStrategyB::~ConcreteStrategyB() {};

void ConcreteStrategyB::execute() const {
    std::cout << "Executing Concrete Strategy B!!" << std::endl;
}