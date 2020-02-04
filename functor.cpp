#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Add
{
    public:
        T operator()(T& x, T& y) { return x+y; }
};

int main()
{
    Add<int> add_int;
    int x = 1;
    int y = 2;
    cout << x << "+" << y << "=" << add_int(x,y) << endl;
}
