#include <stdio.h>

int main() {
    int age, tickets;
    float price, total;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    // Set price based on age
    if (age < 12) {
        price = 100;   // Child price
    } else if (age >= 12 && age < 60) {
        price = 150;   // Adult price
    } else {
        price = 120;   // Senior citizen price
    }

    total = price * tickets;

    printf("Price per ticket: %.2f\n", price);
    printf("Total cost: %.2f\n", total);

    return 0;
}