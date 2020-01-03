CC=g++ -std=c++11 -g -c 

.PHONY: test_read_line_from_file

test_read_line_from_file: read_line_from_file.o test_read_line_from_file.o
	g++ read_line_from_file.o test_read_line_from_file.o -o test_read_line_from_file

test_read_line_from_file.o: test_read_line_from_file.cpp
	${CC} test_read_line_from_file.cpp

read_line_from_file.o: read_line_from_file.h read_line_from_file.cpp
	${CC} read_line_from_file.cpp
