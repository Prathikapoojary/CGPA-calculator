#include <stdio.h>

int main() {
    int n, i;
    float grade, credit, totalCredits = 0, weightedSum = 0, cgpa;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the grade point for subject %d: ", i + 1);
        scanf("%f", &grade);

        printf("Enter the credit hours for subject %d: ", i + 1);
        scanf("%f", &credit);

        // Calculate weighted sum of grades and total credits
        weightedSum += grade * credit;
        totalCredits += credit;
    }

    if (totalCredits == 0) {
        printf("\nError: Total credits cannot be zero.\n");
        return 1;
    }

    // Calculate CGPA
    cgpa = weightedSum / totalCredits;

    printf("\nYour CGPA is: %.2f\n", cgpa);

    return 0;
}
