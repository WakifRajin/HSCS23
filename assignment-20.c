#include <stdio.h>

int main()
{
    char name_a[80];
    scanf("%79s", name_a);

    int length=0;
    for(int i=0; name_a[i]!='\0'; i++)
    {
        length=1+i;
    }

    char temp;

    for(int i=0; i<length/2; i++)
    {
        temp=name_a[i];
        name_a[i]=name_a[length-1-i];
        name_a[length-1-i]=temp;
    }

    for (int i = 0; i < length; i += 1)
    {
        printf("%c", name_a[i]);
    }
}
