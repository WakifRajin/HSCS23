#include <stdio.h>

void dectobin(int n);

void main()
{
    int dec;
    scanf("%d", &dec);
    if(dec>=1 && dec<=1000)
    {
        dectobin(dec);
    }
    else
    {
        printf("invalid input");
    }
}

void dectobin(int n)
{
    int i=0;
    int bin[16];
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(int x=i-1;x>=0;x--)
    {
        printf("%d", bin[x]);
    }
}