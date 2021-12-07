/*
 * Brandon Werner
 * 12/6/2021
 *
 * Strategy Pattern
 */

#include <iostream>

#include "../lib/Strategy/include/Strategy/Client.hpp"
 // #include "../lib/Strategy/include/Strategy/Strategy.hpp"
#include "../lib/Strategy/include/Strategy/ConcreteStrategy.hpp"
#include "../lib/Strategy/include/Strategy/ConcreteStrategyB.hpp"


int main()
{

    // Create the client with a concrete strategy and execute the strategy
    Client* client = new Client(new ConcreteStrategy);
    client->executeStrategy();
    client->setStrategy(new ConcreteStrategyB);
    client->executeStrategy();
    delete client;

    return 0;
}