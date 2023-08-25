#include <stdio.h>
#include <math.h>

int main()
{
  double num1, a, b;
  scanf ("%lf %lf", &a, &b);
  num1 = pow (a, b);
  printf ("a to the power b is: %lf\n", num1);
  return 0;
}