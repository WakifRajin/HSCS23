#include <stdio.h>
int main()
{
  int temp;
  scanf("%d", &temp);
  if(temp >= 25 && temp <=35)
  {
    printf("The weather is nice!");
  }
  else if(temp >= 36 && temp <=45)
  {
    printf("The weather is hot!");
  }
  else if(temp >= 15 && temp <=24)
  {
    printf("The weather is cold!");
  }
  else
  {
    printf("The weather is extreme!");
  }
  return 0;
}