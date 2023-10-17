/*
1. Write a program that calculates taxi fare at a rate of $1.50 per mile. 
Your program should interact with the user in this manner:
TAXI FARE CALCULATOR
Enter beginning odometer reading=> 78602.5
Enter ending odometer reading=> 78622.7
You traveled a distance of 20.2 miles. At $1.50 per mile,
your fare is $30.30
*/
#include <stdio.h>

int main() {
    double start_odometer, end_odometer, distance, fare;

    // Prompt the user to enter the beginning odometer reading
    printf("TAXI FARE CALCULATOR\n");
    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &start_odometer);

    // Prompt the user to enter the ending odometer reading
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &end_odometer);

    // Calculate the distance traveled
    distance = end_odometer - start_odometer;

    // Calculate the fare
    fare = distance * 1.50;

    // Display the result
    printf("You traveled a distance of %.2lf miles. At $1.50 per mile,\n", distance);
    printf("your fare is $%.2lf\n", fare);

    return 0;
}
