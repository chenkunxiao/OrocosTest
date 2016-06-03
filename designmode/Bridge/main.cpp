#include "Abstraction.hpp"
#include "AbstractionImp.hpp"
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
  AbstractionImp* imp = new ConcreteAbstractionImpA();
  Abstraction* abs = new RefinedAbstraction(imp);
  //while(1);
	return 1;
}
