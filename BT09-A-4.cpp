#include <iostream>
using namespace std;
int main ()
{
  char *p;
  *p=100;
  delete p;// lỗi
  return 0;
}
