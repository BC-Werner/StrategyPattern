#include <Client.hpp>


Client::Client(Strategy* strategy)
{
    this->concreteStrategy = strategy;
}

Client::~Client()
{
    delete this->concreteStrategy;
}


void Client::setStrategy(Strategy* strategy)
{
    this->concreteStrategy = strategy;
}

void Client::executeStrategy() const
{
    this->concreteStrategy->execute();
}