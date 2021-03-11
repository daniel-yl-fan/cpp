#include <iostream>
class Calc
{
  public:
    int add(int a, int b)
    {
      return a + b;
    }
    int sub(int a, int b)
    {
      return a - b;
    }
    int func(int (Calc::*funcPtr)(int a, int b), int a, int b)
    {
      return (this->*funcPtr)(a, b);
    }
};
int main()
{
  Calc calc;
  std::cout << calc.func(&Calc::add, 5, 3) << std::endl;
  std::cout << calc.func(&Calc::sub, 5, 3) << std::endl;
}
