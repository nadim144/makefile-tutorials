# Define flags
CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++11 -ggdb

# Define Variables
BIN     	:= bin
SRC     	:= src
INCLUDE 	:= include
LIB     	:= lib
LIBRARIES   := 
EXECUTABLE  := main

# Define Targets
build: $(BIN)/$(EXECUTABLE)

rebuild: clean build
	@echo "Re-build Successful..."

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	@echo "Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
	@echo "Buidl Successful, Check binary in $(BIN)/ folder..."
run:
	$(BIN)/$(EXECUTABLE)
clean:
	@echo "Clearing..."
	-rm $(BIN)/*
	@echo "Clearing Successful..."