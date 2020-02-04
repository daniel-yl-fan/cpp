#include <typeinfo>
#include <initializer_list>
#include <string>
#include <iostream>
using namespace std;

class A
{
    public:
        A(){ cout << "A::Constructor" << endl; }
        A(const A& a){ cout << "A::Copy constructure" << endl; }
        A(string s) : A{s}{ cout << "A::Param Constructor: " << s << endl; }
        const A& operator=(const A& a) { cout << "A::Assignment operator" << endl;  return a; }
        A(initializer_list<string> list)
        {
            cout << "A::initializer_list Constructor: " << *list.begin() << endl;
        }

        A(A&& a){ cout << "A::Move constructure" << endl; }
        A& operator=(A&& a) { cout << "A::Move assignment operator" << endl; return a;}

        ~A(){ cout << "Destructor" << endl; }

        virtual void some_function(int i) { cout << "A::" << __func__ << endl; }
        virtual void another_function(int i) final { cout << "A::" << __func__ << endl; }
    private:
        void* ptr = nullptr;
};

class B : public A
{
    public:
        using A::A;
        virtual void some_function(int i) override { cout <<"B::" << __func__ << endl; }
};

enum class Color
{
    no_color,
    red  = 1,
    blue = 2,
    green,
    cyan,
    yellow,
    max  = 255
};

int main()
{
    A a;
    A b = a;
    A c ("foo");
    c = a;
    A d {"hello"};

    cout << endl;

    A e = move(a);
    A f;
    f = move(a);

    cout << endl;

    a.some_function(1);
    B g;
    g.some_function(1);

    cout << typeid(a).name() << endl;
}
