#ifndef _USEMODEL_HPP
#define _USEMODEL_HPP
#include <iostream>
#include "model.hpp"
template <class T>
class ConnFactory;
class usemodel
{
public:
  bool modelbool(){ return ConnFactory<int>::outbool();}
};
#endif
