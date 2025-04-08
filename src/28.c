#include <stdio.h>

int main() {
    int i;
    printf("Hello, World!\n");
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("Even number: %d\n", i);
        } else {
            printf("Odd number: %d\n", i);
        }
    }
    return 0;
}
