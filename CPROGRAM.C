#include <stdio.h>
#include <stdbool.h>

// Define thresholds for the greenhouse
#define TEMP_MIN 18.0
#define TEMP_MAX 24.0

void check_system_status(float current_temp) {
    printf("\n--- System Logic Check ---\n");
    printf("Current Temperature: %.2f°C\n", current_temp);

    if (current_temp < TEMP_MIN) {
        printf("STATUS: [HEATER ON] - Temperature too low!\n");
    } 
    else if (current_temp > TEMP_MAX) {
        printf("STATUS: [COOLER ON] - Temperature too high!\n");
    } 
    else {
        printf("STATUS: [SYSTEM IDLE] - Temperature is optimal.\n");
    }
    printf("--------------------------\n");
}

