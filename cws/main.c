#include <stdio.h>
#include "lib.h"
int main()
{
    int choice;
    float temperature, converted;
    display_menu();
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted = celsius_to_fahrenheit(temperature);
        printf("Temperature in Fahrenheit: %.2f degree F\n", converted);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted = fahrenheit_to_celsius(temperature);
        printf("Temperature in Celsius: %.2f degree C\n", converted);
    }
    else
    {
        printf("Invalid choice. Please run the program again.\n");
    }
    return 0;
}
