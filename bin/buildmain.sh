#!/bin/sh
g++ -pedantic -Wall -std=c++17 -c -o bin/main.o src/main.cc
g++ -pedantic -Wall -std=c++17 -c -o bin/processtheargs.o src/processtheargs.cc
g++ -pedantic -Wall -std=c++17 -o bin/maintest bin/main.o bin/processtheargs.o
