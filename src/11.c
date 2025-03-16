// This is an example of a C program that calculates the area of a rectangle
#include <stdio.h>

int main() {
    float length, width, area;

    // Ask user for length and width of rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Print the result
    printf("The area of the rectangle is %f\n", area);

    return 0;
}
