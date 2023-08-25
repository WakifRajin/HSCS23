#include <stdio.h>

int main()
{
  int friends;
  scanf("%d", &friends);
  if(friends >= 100)
  {
    printf("You are a hero!");
  }
  else if(friends >= 70)
  {
    printf("You are famous!");
  }
  else if(friends >= 40)
  {
    printf("You are a ok!");
  }
  else
  {
    printf("Please make more friends!");
  }
  return 0;
}