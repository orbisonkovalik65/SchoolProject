#include <stdio.h>
int main() {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &i);
    
    if (i > 0) {
        for (i = 1; i <= i; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}
