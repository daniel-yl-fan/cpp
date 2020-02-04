#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> getString(void)
{
    vector<string> v = { "hello", "world", "!!!" };
    return v;
}

int main()
{
    auto&& str = getString();
    for( auto& s : str)
    {
        cout << s << endl;
    }
}
