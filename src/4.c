#include <stdio.h>
#include <stdlib.h>
int main(void) {
    // Ask the user for their name and age
    char *name = input("What's your name?");
    int age = input("How old are you?");
    
    // Print a greeting message with the user's name and age
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}
