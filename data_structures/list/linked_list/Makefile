BINFOLDER := bin/
INCFOLDER := include/
OBJFOLDER := obj/
SRCFOLDER := source/
CREATE_OBJ_FOLDER := $(shell mkdir -p $(OBJFOLDER))

CC := g++
CFLAGS := -std=c++11 -Wall -ansi -Wshadow

SRCFILES := $(wildcard source/*.cpp)

all: $(SRCFILES:source/%.cpp=obj/%.o)
	$(CC) $(CFLAGS) obj/*.o -o bin/binary

obj/%.o: source/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I./include

clean:
	rm -rf obj/*
	rm -rf bin/*

run:
	make clean
	make
	cd bin/ && ./binary

