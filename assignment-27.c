#include <stdio.h>

void print_multiplication_table (int n);

int main()
{
  int num, start, end;
  //scanf ("%d %d", &start, &end);
  start=1, end=10;
  for(int i=start; i<=end; i++)
    {
        print_multiplication_table (i);
    }
  return 0;
}

void print_multiplication_table (int n)
{
  int i;
  printf ("Multiplcation table for %d -\n", n);
  for (i = 1; i <= 10; i = i + 1)
  {
    printf ("%d x %d = %d\n", n, i, n * i);
    }
}