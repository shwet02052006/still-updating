#include <stdio.h>

float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
void display_menu();

int main() {
    int choice;
    float temperature, converted;

    display_menu();
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted = celsius_to_fahrenheit(temperature);
        printf("Temperature in Fahrenheit: %.2f F\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted = fahrenheit_to_celsius(temperature);
        printf("Temperature in Celsius: %.2f C\n", converted);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void display_menu() {
    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
}
