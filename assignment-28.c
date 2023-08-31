#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("Prime Number.\n");
    } else {
        printf("Not a Prime Number.\n");
    }
    return 0;
}
