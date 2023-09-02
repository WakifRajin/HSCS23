#include<stdio.h>

void main()
{
    char name[21];
    char key;
    int temp = 0;
    
    scanf("%s", name);
    scanf(" %c", &key);
    
    for(int i=0; name[i]!='\0'; i++)
    {
       if(name[i]==key)
       {
           temp=1;
           break;
       }
    }
    
    if(temp==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
