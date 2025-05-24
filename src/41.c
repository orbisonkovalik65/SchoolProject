#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char *str = "Hello, World!";
    
    printf("%s", str);
    free(str);
    return 0;
}
