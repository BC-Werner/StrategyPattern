#pragma once
#include "Strategy.hpp"


class ConcreteStrategy : public Strategy
{
private:
public:
    ConcreteStrategy();
    ~ConcreteStrategy();

    void execute() const;
};