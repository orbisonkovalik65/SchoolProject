// c code for SchoolProject: Write a C program to calculate the area of a rectangle

#include <stdio.h>

int main() {
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}
