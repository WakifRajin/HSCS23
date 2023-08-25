#include <stdio.h>
int main ()
{
  int n;
  int i=0;
  scanf("%d",&n);
  if(n%2 == 0)
  {
    while(i<20)
      {
        printf("even\n");
        i = i+1;
      }
  }
  else
  {
    while(i<20)
      {
        printf("odd\n");
        i = i+1;
      }
  }
  return 0;
}