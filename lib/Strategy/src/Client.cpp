#include "../include/Strategy/Client.hpp"
#include <iostream>


Client::Client(Strategy* strategy)
{
    this->concreteStrategy = strategy;
}

Client::~Client()
{
    std::cout << "Deleting ConcreteStrategy . . . " << std::endl;
    delete this->concreteStrategy;
}


void Client::setStrategy(Strategy* strategy)
{
    this->concreteStrategy = strategy;
}

void Client::executeStrategy() const
{
    std::cout << "Executing Strategy . . . " << std::endl;
    std::cout << "\t";
    this->concreteStrategy->execute();
    std::cout << "Strategy execution finished." << std::endl;
}