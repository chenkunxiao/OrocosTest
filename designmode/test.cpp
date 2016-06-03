#include <iostream>
#include <stdlib.h>
using namespace std;

class Person
{

private:
  string name;
public:

  Person(){}
  Person(string name)
  {
    this->name = name;
  }

  virtual void Show()
  {
    cout << "Person" << endl;
  }
};

class Finery:Person
{
public:
  Person component;
public:
  void Decorate(Person component)
  {
    this->component = component;
  }

  virtual void Show()
  {
     component.Show();
  }
};

class TShirts:Finery
{
public:
  void Show()
  {
    cout << "T-Shirt" << endl;
    Finery::Show();
  }
};

class BigTrouser : public Finery
{
public:
  void Show()
  {
    cout << "BigTrouser" << endl;
    Finery::Show();
  }
};

class Sneakers:public Finery
{
public:
  void Show()
  {
    cout << "Sneakers" << endl;
    Finery::Show();
  }
};

int main()
{
  Person xc("Person1");
  Sneakers pqx;
  BigTrouser kk;
  TShirts dtx;
  pqx.Decorate(xc);
  kk.Decorate(pqx);
  dtx.Decorate(kk);
  return 1;
}
