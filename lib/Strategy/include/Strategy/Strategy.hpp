#pragma once

class Strategy
{
private:
public:
    virtual ~Strategy() = 0;
    virtual void execute() const = 0;
};