#include <stdio.h>
#include <string.h>

int main() {
    char district1[31];
    char district2[31];

    printf("district1: ");
    scanf("%30s", district1);
    printf("district2: ");
    scanf("%30s", district2);
    printf("\n");

    int comparisonResult = strcmp(district1, district2);

    if (comparisonResult == 0) {
        printf("Both districts have the same name: %s\n", district1);
    } else if (comparisonResult < 0) {
        printf("Smaller district: %s\n", district1);
        printf("Larger district: %s\n", district2);
    } else {
        printf("Smaller district: %s\n", district2);
        printf("Larger district: %s\n", district1);
    }

    return 0;
}
