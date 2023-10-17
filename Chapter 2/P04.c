/*
4. Write a program to convert a sum of money in US dollars to British pounds.
DATA REQUIREMENTS
Problem Input
float dollar currency in US dollars 
Problem Output
float pound currency in British pounds 
Relevant Formula
1 USD = 0.65 GBP
*/
#include <stdio.h>

int main() {
    float dollar, pound;

    // Prompt the user to enter the amount in US dollars
    printf("Enter the amount in US dollars: ");
    scanf("%f", &dollar);

    // Convert the amount to British pounds
    pound = dollar * 0.65;

    // Display the equivalent amount in British pounds
    printf("%.2f USD is equal to %.2f GBP\n", dollar, pound);

    return 0;
}


