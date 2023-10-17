/*
3. Write a program that estimates the temperature in a freezer (in °C) given the 
elapsed time (hours) since a power failure. Assume this temperature (T) is 
given by
T = 4t
2
t + 2 - 20
where t is the time since the power failure. Your program should prompt the 
user to enter how long it has been since the start of the power failure in whole 
hours and minutes. Note that you will need to convert the elapsed time into 
hours. For example, if the user entered 2 30 (2 hours 30 minutes), you would 
need to convert this to 2.5 hours.
*/
#include <stdio.h>

int main() {
    double hours, minutes, total_time, temperature;

    // Prompt the user to enter the elapsed time in hours and minutes
    printf("Enter the elapsed time since the power failure (hours minutes): ");
    scanf("%lf %lf", &hours, &minutes);

    // Convert minutes to hours and add to the total time
    total_time = hours + (minutes / 60.0);

    // Calculate the temperature using the formula
    temperature = 4 * total_time * total_time + 2 - 20;

    // Display the estimated temperature
    printf("Estimated temperature in the freezer: %.2f°C\n", temperature);

    return 0;
}
