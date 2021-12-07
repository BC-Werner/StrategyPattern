#pragma once
#include "Strategy.hpp"


class ConcreteStrategyA : public Strategy
{
private:
public:
    ConcreteStrategyA();
    ~ConcreteStrategyA();

    void execute() const;
};