//#include "usemodel.hpp"
#include <iostream>
using namespace std;

int main()
{
  //int a = 2;
  //usemodel mm;
  //mm.modelbool();
  //char ttt[2];
  //ttt[0] = 'a';
  //ttt[1] = 'b';
  char* buf = new char(2);
  buf[0] = 'a';
  buf[1] = 'b';
  void** pplink;
  pplink = (void**)buf;
  cout << buf <<endl;
  cout << *pplink << endl;
  cout << pplink << endl;
  delete buf;
  return 1;
}
