#include <stdio.h>

int main()
{
  int salary[] = {5000, 6000, 7000, 8000, 9000, 10000};
  int n = 6, i;
  int temp;

  for (i = 0; i < n / 2; i += 1)
  {
    // To exchange the value of ara [i] and ara [n-l-i]
    temp = salary[i];
    salary[i] = salary[n-1-i];
    salary[n-1-i] = temp;
    }
  for (i = 0; i < n; i += 1)
  {
    printf ("%d\n", salary[i]);
    }
  return 0;
}