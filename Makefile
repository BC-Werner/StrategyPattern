LIBINC = ./lib/Strategy/include/Strategy/
LIBSRC = ./lib/Strategy/src/
CC = c++
INCLUDES = -I$(LIBINC)

# $(CC) -c $(LIBSRC)Strategy.cpp -I$(LIBINC)
# $(CC) -c $(LIBSRC)ConcreteStrategyB.cpp -I$(LIBINC)
# $(CC) -c $(LIBSRC)Client.cpp -I$(LIBINC)
# $(CC) -c ./src/main.cpp -I$(LIBINC)

build: Strategy.o ConcreteStrategyA.o ConcreteStrategyB.o Client.o Main.o
	$(CC) Strategy.o ConcreteStrategyA.o ConcreteStrategyB.o Client.o Main.o -o StrategyPattern
	
Strategy.o: $(LIBSRC)Strategy.cpp $(LIBINC)Strategy.hpp
	$(CC) -c $< $(INCLUDES)

ConcreteStrategyA.o: $(LIBSRC)ConcreteStrategyA.cpp $(LIBINC)ConcreteStrategyA.hpp
	$(CC) -c $< $(INCLUDES)

ConcreteStrategyB.o: $(LIBSRC)ConcreteStrategyB.cpp $(LIBINC)ConcreteStrategyB.hpp
	$(CC) -c $< $(INCLUDES)
	
Client.o: $(LIBSRC)Client.cpp $(LIBINC)Client.hpp
	$(CC) -c $< $(INCLUDES)
	
Main.o: ./src/main.cpp
	$(CC) -c $< $(INCLUDES)
	
clean:
	rm -rf *.o StrategyPattern
	
run:
	./StrategyPattern
