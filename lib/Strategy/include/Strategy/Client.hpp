#pragma once
#include <Strategy.hpp>

class Client
{
private:
    Strategy* concreteStrategy;
public:
    Client(Strategy* strategy = nullptr);
    ~Client();

    void setStrategy(Strategy* strategy);
    void executeStrategy() const;
};
