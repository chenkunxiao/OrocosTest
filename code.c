#include <stdio.h>
#include <stdlib.h>

int add(int a,int b,int d)
{
  int c = a + b + d;
  return c;
}

long int sample_1(long int *xp,long int y,int b)
{
  long int t = *xp + y + b;
  *xp = t;
  return t;
}
