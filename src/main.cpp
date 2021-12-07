/*
 * Brandon Werner
 * 12/6/2021
 *
 * Strategy Pattern
 */

#include <iostream>
 //#include <vector>
 //#include <string>
 //#include <algorithm>

#include "../lib/Strategy/include/Strategy/Client.hpp"
#include "../lib/Strategy/include/Strategy/Strategy.hpp"
#include "../lib/Strategy/include/Strategy/ConcreteStrategy.hpp"

//using namespace std;

int main()
{

    Client* client = new Client(new ConcreteStrategy);
    client->executeStrategy();
    delete client;


    return 0;
}