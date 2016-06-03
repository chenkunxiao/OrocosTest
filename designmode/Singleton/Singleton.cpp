//Singleton.h //Singleton.cpp
#include "Singleton.hpp"
#include <iostream>
using namespace std;
Singleton* Singleton::_instance = 0;
Singleton::Singleton()
{
  cout<<"Singleton...."<<endl;
}
Singleton* Singleton::Instance()
{
  if (_instance == 0)
  {
    _instance = new Singleton();
  }
}
