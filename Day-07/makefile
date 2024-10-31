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
all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	@echo "🚧 Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
	@echo "🚧 Buil Successful, Check binary in $(BIN)/$(EXECUTABLE)..."

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
	@echo "🧹 Clearing Successful..."