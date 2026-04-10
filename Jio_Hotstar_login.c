#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];

    // Predefined login credentials
    char correct_username[] = "jio_user";
    char correct_password[] = "12345";

    printf("===== Jio Hotstar Login =====\n");

    // Taking input
    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    // Checking credentials
    if (strcmp(username, correct_username) == 0 && 
        strcmp(password, correct_password) == 0) {
        printf("Login Successful! Welcome to Jio Hotstar.\n");
    } else {
        printf("Login Failed! Invalid Username or Password.\n");
    }

    return 0;
}