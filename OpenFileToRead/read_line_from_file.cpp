#include <fstream>
#include "read_line_from_file.h"

std::string& read_line_from_file( const char* fileName)
{
    static std::string emptyString;
    static std::ifstream file;
    if( file.is_open() == false)
    {
        file.open(fileName);
    }
    if( file.is_open() == true)
    {
        static std::string line;
        getline(file, line);
        return line;
    }
    return emptyString;
}
