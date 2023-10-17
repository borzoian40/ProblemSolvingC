/*
9. Write a program that takes the length and width of a rectangular yard and the 
length and width of a rectangular house situated in the yard. Your program 
should compute the time required to cut the grass at the rate of two square 
feet a second.
*/
#include <stdio.h>

int main() {
    double yardLength, yardWidth, houseLength, houseWidth, grassArea, timeRequired;

    // Prompt the user to enter the dimensions of the yard and house
    printf("Enter the length of the yard (in feet): ");
    scanf("%lf", &yardLength);
    printf("Enter the width of the yard (in feet): ");
    scanf("%lf", &yardWidth);
    printf("Enter the length of the house (in feet): ");
    scanf("%lf", &houseLength);
    printf("Enter the width of the house (in feet): ");
    scanf("%lf", &houseWidth);

    // Calculate the grass area (yard area - house area)
    grassArea = (yardLength * yardWidth) - (houseLength * houseWidth);

    // Calculate the time required to cut the grass (in seconds)
    timeRequired = grassArea / 2;  // Cutting at a rate of 2 square feet per second

    // Display the result
    printf("Time required to cut the grass: %.2lf seconds\n", timeRequired);

    return 0;
}

