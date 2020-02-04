#include <iostream>
using namespace std;

int main()
{
    const int a = 1;
    [a]{ cout << "a=" << a << endl; } ();

    const int b = 2;
    [] (int b) { cout << "b=" << b << endl; } (b);

    const int c = 3;
    [] (const int& c) { cout << "c=" << c << endl; } (c);

    const int d = 4;
    [&] () { cout << "d=" << d << endl; } ();
}
