#include <stdio.h>
#include <string.h>

int main()
{
  char name[80];
  int name_length;
  scanf ("%s", &name);
  name_length = strlen (name);
  printf ("The length of my name %s is %d characters.\n", name, name_length);
  return 0;
}