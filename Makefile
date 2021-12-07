build: Strategy.o ConcreteStrategyA.o ConcreteStrategyB.o Client.o Main.o
	c++ Strategy.o ConcreteStrategyA.o ConcreteStrategyB.o Client.o Main.o -o StrategyPattern
	
Strategy.o: ./lib/Strategy/src/Strategy.cpp ./lib/Strategy/include/Strategy/Strategy.hpp
	c++ -c ./lib/Strategy/src/Strategy.cpp 
	
ConcreteStrategyA.o: ./lib/Strategy/src/ConcreteStrategyA.cpp ./lib/Strategy/include/Strategy/ConcreteStrategyA.hpp
	c++ -c ./lib/Strategy/src/ConcreteStrategyA.cpp 

ConcreteStrategyB.o: ./lib/Strategy/src/ConcreteStrategyB.cpp ./lib/Strategy/include/Strategy/ConcreteStrategyB.hpp
	c++ -c ./lib/Strategy/src/ConcreteStrategyB.cpp 
	
Client.o: ./lib/Strategy/src/Client.cpp ./lib/Strategy/include/Strategy/Client.hpp
	c++ -c ./lib/Strategy/src/Client.cpp 
	
Main.o: ./src/main.cpp
	c++ -c ./src/main.cpp
	
clean:
	rm -rf *.o StrategyPattern
	
run:
	./StrategyPattern