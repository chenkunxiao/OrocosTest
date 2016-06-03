#include <iostream>
using namespace std;

class A
{
public:
  A(){cout << "A" << endl;}
  virtual ~A(){cout << "A destroy" << endl;}

  virtual void outname() = 0;
};

class A2: public A
{
public:
  A2(){cout << "A2" << endl;}
  ~A2(){cout << "A2 destroy" << endl;}

  void outname() {cout << "This is my name" << endl;}
};

class B
{
public:
  B(){}
  B(A* a):m_A(a){}
  ~B(){}
  A* m_A;
  void outBname(){m_A->outname();}
};

struct mm
{
  double d;
  int a;
  short b;
  char c;
};

struct mm2
{
  short a;
  double d;
  int b;
  char c;
};

struct mm3
{
  char c;
  double d;
  short b;
  int a;
};

class ABase
{
public:
  ABase* input;
  ABase()
  {
    cout << "ABase" << endl;
  }
  ~ABase()
  {
  }

  virtual void outfirstname()
  {
    cout << "outfirstABasename" << endl;
  }

  void setup(ABase* m)
  {
    input = m;
  }

  ABase* getInput()
  {
    return input;
  }
};

class ASecondBase:public ABase
{
public:
  ASecondBase()
  {
    cout << "ASecondBase" << endl;
  }
  ~ASecondBase()
  {
  }
  void outfirstname()
  {
    cout << "outfirstASecondBase" << endl;
    ABase::outfirstname();
  }

  ASecondBase* getInput()
  {
    return (ASecondBase*)(ABase::getInput());
  }
};

union Pointer_t
{
  unsigned int value;
  struct _ptr_type
  {
    unsigned short tag;
    unsigned short index;
  }ptr;
};

int main()
{
  // int a = 3;
  //ASecondBase b;

  /* Pointer_t pointer1;
  pointer1.value = 1;
  cout << "tag:\t" << pointer1.ptr.tag << endl;
  cout << "index:\t" << pointer1.ptr.index << endl;*/
  char* bb;
  cout << sizeof(bb) << endl;
  return 1;
}
