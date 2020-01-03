#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include "read_line_from_file.h"
string& read_line_from_file( const char* fileName){
    static ifstream file;
    if( file.is_open() == false){
        file.open( fileName);
    } 
    if( file.is_open() == true){
        static string line;
        getline( file, line); 
        return line;
    }
}
