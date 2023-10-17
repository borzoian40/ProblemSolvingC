/*
13. Write a program that predicts how many whole sections of a batch would need 
to be created given the number of students enrolled in the batch. Assume that 
each section accommodates 30 students. Prompt the user to enter the number 
of students enrolled. Echo print the number of students enrolled and then 
display both the number of sections that will be required and the number of 
students that will be left over.
*/
#include <stdio.h>

int main() {
    int studentsEnrolled, sectionsRequired, studentsLeftOver;

    // Prompt the user to enter the number of students enrolled
    printf("Enter the number of students enrolled: ");
    scanf("%d", &studentsEnrolled);

    // Calculate the number of sections required
    sectionsRequired = studentsEnrolled / 30;  // Assuming each section accommodates 30 students

    // Calculate the number of students left over
    studentsLeftOver = studentsEnrolled % 30;

    // Display the results
    printf("Number of students enrolled: %d\n", studentsEnrolled);
    printf("Number of sections required: %d\n", sectionsRequired);
    printf("Number of students left over: %d\n", studentsLeftOver);

    return 0;
}

