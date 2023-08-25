#include <stdio.h>
int main()
{
  int arif_age=22, ashik_age=20;

  if(ashik_age < arif_age)
  {
      printf("Ashik is Younger than Arif.\n");
  }
  else if(ashik_age == arif_age)
  {
      printf("Ashik and Arif are same aged.\n");
  }
  else
  {
      printf("Ashik is older than arif.\n");
  }
  return 0;
}