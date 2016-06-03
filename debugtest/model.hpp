#ifndef _MODEL_HPP
#define _MODEL_HPP
#include "usemodel.hpp"
#include <iostream>
using namespace std;

class usemodel;
template <class T>
class ConnFactory
{
public:
  virtual ~ConnFactory(){}
  void setname(T& value){data = value;}
  void outname(){cout << data << endl;}
  static bool outbool(){return true;}
private:
  T data;
  usemodel kk;
};
#endif
