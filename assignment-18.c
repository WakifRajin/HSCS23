#include <stdio.h>
int main()
{
  double sum=0;
  double temp[]={25.4 , 25.01, 24.06, 23.7, 22.9, 22.1, 21.6, 22, 21.03, 20.5};
  for(int i=0; i<10; i++)
    {
      sum=sum+temp[i];
    }
  printf("%lf", sum/10);
  return 0;
}