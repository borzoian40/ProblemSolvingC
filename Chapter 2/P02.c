/*
2. Write a program to assist in the design of a hydroelectric dam. Prompt 
the user for the height of the dam and for the number of cubic meters of 
water that are projected to flow from the top to the bottom of the dam each 
second. Predict how many megawatts (1MW 5 106
W) of power will be 
produced if 90% of the work done on the water by gravity is converted to 
electrical energy. Note that the mass of one cubic meter of water is 1000 kg. 
Use 9.80 m/sec2 as the gravitational constant g. Be sure to use meaningful 
names for both the gravitational constant and the 90% efficiency constant. 
For one run, use a height of 170 m and flow of 1.30 3 103 m3/s. The relevant 
formula (w 5 work, m 5 mass, g 5 gravity, and h 5 height) is: 
w 5 mgh.
*/
#include <stdio.h>

int main() {
    const double g = 9.80;  // Gravitational constant in m/s^2
    const double efficiency = 0.90;  // 90% efficiency constant

    double height, flow, mass, work, power;

    // Prompt the user for the height of the dam in meters
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);

    // Prompt the user for the flow of water in cubic meters per second
    printf("Enter the flow of water (in cubic meters per second): ");
    scanf("%lf", &flow);

    // Calculate the mass of water per second (kg/s)
    mass = flow * 1000;  // Convert from cubic meters to kg

    // Calculate the work done on the water per second (W)
    work = mass * g * height;

    // Calculate the power produced in megawatts (MW)
    power = (work * efficiency) / 1e6;  // 1 MW = 10^6 W

    // Display the result
    printf("Predicted power produced: %.2lf megawatts\n", power);

    return 0;
}
