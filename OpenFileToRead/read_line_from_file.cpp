#include <fstream>
#include "read_line_from_file.h"

string& read_line_from_file( const char* fileName)
{
    static std::ifstream file;
    if( file.is_open() == false)
    {
        file.open(fileName);
    }
    if( file.is_open() == true)
    {
        static string line;
        getline(file, line);
        return line;
    }
}
