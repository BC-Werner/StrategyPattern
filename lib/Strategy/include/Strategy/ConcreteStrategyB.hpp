#pragma once
#include <Strategy.hpp>


class ConcreteStrategyB : public Strategy
{
private:
public:
    ConcreteStrategyB();
    ~ConcreteStrategyB();

    void execute() const;
};