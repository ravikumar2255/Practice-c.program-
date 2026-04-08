#include <stdio.h>

int main() {
    int subjects;
    float fee_per_subject, total_fee;

    // Input
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    printf("Enter fee per subject: ");
    scanf("%f", &fee_per_subject);

    // Calculation
    total_fee = subjects * fee_per_subject;

    // Output
    printf("\n--- Exam Fee Details ---\n");
    printf("Number of Subjects: %d\n", subjects);
    printf("Fee per Subject: %.2f\n", fee_per_subject);
    printf("Total Exam Fee: %.2f\n", total_fee);

    return 0;
}