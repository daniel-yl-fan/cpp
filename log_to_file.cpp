#include <fstream>

int main()
{
  std::ofstream ofs;
  ofs.open("/home/dafan/tmp/foo.log", std::ofstream::out | std::ofstream::app);
  ofs << "hello" << std::endl;
}
