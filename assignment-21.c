#include <stdio.h>

int main()
{
    char name[21];
    scanf("%s", name);

    char key;
    scanf(" %c", &key);

    int length=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        length=1+i;
    }

    for(int n=0; n<=length; n++)
    {
        if(name[n]==key)
        {
           printf("yes");
           break;
        }
        if(n==length)
        {
            printf("no");
        }
    }
}
