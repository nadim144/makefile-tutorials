.PHONY: all clean help

CXX = g++ -std=c++11
FLAGS = -Wall -Wextra -Werror -pedantic -c -g


BUILDDIR=build
OBJDIR += ${BUILDDIR}/obj
BINDIR += ${BUILDDIR}/bin
SOURCEDIR=./src
EXEC=TestExe
SOURCES:=$(wildcard $(SOURCEDIR)/*.cpp)
OBJ:=$(patsubst $(SOURCEDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

all: dir $(BINDIR)/$(EXEC)

dir:
	mkdir -p $(BUILDDIR) -p $(OBJDIR) -p $(BINDIR)

$(BINDIR)/$(EXEC): $(OBJ)
	$(CXX) $^ -o $@

$(OBJ): $(OBJDIR)/%.o : $(SOURCEDIR)/%.cpp
	$(CXX) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)/*.o $(BINDIR)/$(EXEC)
