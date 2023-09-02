#include <stdio.h>

int isPrime(int n);

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrime(num);
    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
    {
        printf("Not a Prime Number.\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            printf("Not a Prime Number.\n");
            return 0;
        }
    }
    printf("Prime Number.\n");
    return 0;
}
