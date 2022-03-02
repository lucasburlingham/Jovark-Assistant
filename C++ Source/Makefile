CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu++20 -g 

EXEC = main

all: main.cpp
	$(CXX) main.cpp -o $(EXEC) $(OBJ) $(CXXFLAGS)
	rm -f a.out

clean:
	rm -rf $(OBJ) $(EXEC)
