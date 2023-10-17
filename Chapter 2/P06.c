/*
6. Write a program that predicts the score needed on a final exam to achieve a 
desired grade in a course. The program should interact with the user as follows:
Enter desired grade> B
Enter minimum average required> 79.5
Enter current average in course> 74.6
Enter how much the final counts 
as a percentage of the course grade> 25
You need a score of 94.20 on the final to get a B.
In the example shown, the final counts 25% of the course grade.
*/
#include <stdio.h>

int main() {
    char desiredGrade;
    double minimumAverage, currentAverage, finalPercentage, finalScoreNeeded;

    // Prompt the user to enter the desired grade
    printf("Enter desired grade> ");
    scanf(" %c", &desiredGrade);  // Note the space before %c to skip whitespace characters

    // Prompt the user to enter the minimum average required
    printf("Enter minimum average required> ");
    scanf("%lf", &minimumAverage);

    // Prompt the user to enter the current average in the course
    printf("Enter current average in course> ");
    scanf("%lf", &currentAverage);

    // Prompt the user to enter how much the final counts as a percentage of the course grade
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf", &finalPercentage);

    // Calculate the final score needed
    finalScoreNeeded = ((minimumAverage * 100) - (currentAverage * (100 - finalPercentage))) / finalPercentage;

    // Display the result
    printf("You need a score of %.2lf on the final to get a %c.\n", finalScoreNeeded, desiredGrade);

    return 0;
}
