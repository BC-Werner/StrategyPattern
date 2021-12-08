/*
 * Brandon Werner
 * 12/6/2021
 *
 * Strategy Pattern
 */

#include <iostream>

#include <Client.hpp>
#include <ConcreteStrategyA.hpp>
#include <ConcreteStrategyB.hpp>

int main()
{

    // Create the client with a concrete strategy and execute the strategy
    Client* client = new Client(new ConcreteStrategyA);
    client->executeStrategy();
    client->setStrategy(new ConcreteStrategyB);
    client->executeStrategy();
    delete client;

    return 0;
}