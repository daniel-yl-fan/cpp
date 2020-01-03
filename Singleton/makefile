CC=g++ -std=c++11 -g -c 

.PHONY: testSingleton

testSingleton: singleton.o testSingleton.o
	g++ singleton.o testSingleton.o -o testSingleton

testSingleton.o: testSingleton.cpp
	${CC} testSingleton.cpp

singleton.o: singleton.h singleton.cpp
	${CC} singleton.cpp
