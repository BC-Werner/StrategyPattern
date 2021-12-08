PROGRAM_NAME = StrategyPattern
CC = c++

LIBINC = ./lib/Strategy/include/Strategy/
LIBSRC = ./lib/Strategy/src/

BUILD_DIR = builds/
BUILD_OBJ = $(BUILD_DIR)obj/
INCLUDES = -I$(LIBINC)

OBJECTS = Strategy.o ConcreteStrategyA.o ConcreteStrategyB.o Client.o 
OBJS = $(foreach obj, $(OBJECTS), $(BUILD_OBJ)$(obj))


$(PROGRAM_NAME): $(OBJS) Main.o
	$(CC) $(OBJS) $(BUILD_OBJ)Main.o -o $(BUILD_DIR)$@

Main.o: ./src/main.cpp
	$(CC) $(INCLUDES) -c $< -o $(BUILD_OBJ)$@

$(BUILD_OBJ)%.o: $(LIBSRC)%.cpp
	$(CC) $(INCLUDES) -c $< -o $@
	
clean:
# rm -rf $(BUILD_OBJ)*.o $(BUILD_DIR)StrategyPattern
	@find . -type f -name '*.o' -print -delete
	@find . -type f -name 'StrategyPattern' -print -delete

run:
	@$(BUILD_DIR)$(PROGRAM_NAME);