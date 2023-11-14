#include <stdio.h>

int main() {
    int button;
    double temperature, convertedTemperature;

    // Prompt the user for input
    printf("Enter a virtual button (0 for F to C, 1 for C to F): ");
    scanf("%d", &button);

    // Check if the button is 0 or 1
    if (button == 0) {
        // Fahrenheit to Centigrade conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);

        convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;

        printf("The Centigrade is %.2lf\n", convertedTemperature);
    } else if (button == 1) {
        // Centigrade to Fahrenheit conversion
        printf("Enter temperature in Centigrade: ");
        scanf("%lf", &temperature);

        convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;

        printf("The Fahrenheit is %.2lf\n", convertedTemperature);
    } else {
        // Invalid button input
        printf("Invalid virtual button. Please enter 0 or 1.\n");
    }

    return 0;
}
