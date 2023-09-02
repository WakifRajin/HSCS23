#include <stdio.h>
#include <string.h>

int main() {
    char input[80];
    
    while (1) {
        printf("Enter a string (or 'quit' to exit): ");
        scanf("%s", input);
        
        if (strcmp(input, "quit") == 0) {
            printf("Exiting the program.\n");
            break;
        }
        
        printf("You entered: %s\n", input);
    }
    
    return 0;
}
