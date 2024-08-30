/*
kms to miles 
inches to foot  
cms to inche 
pound to kgs 
inches to meters 

1. Kilometers to Miles
miles
=
kilometers
×
0.621371
miles=kilometers×0.621371

2. Inches to Feet
feet
=
inches
÷
12
feet=inches÷12

3. Centimeters to Inches
inches
=
centimeters
×
0.393701
inches=centimeters×0.393701

4. Pounds to Kilograms
kilograms
=
pounds
×
0.453592
kilograms=pounds×0.453592

5. Inches to Meters
meters
=
inches
×
0.0254
meters=inches×0.0254

*/
#include <stdio.h>

void kmtomiles()
{
    printf("Enter the value in kilometers: ");
    float km;
    scanf("%f", &km);
    printf("In miles: %f\n", km * 0.621371);
}
void inchestofeet()
{
    printf("Enter the value in inches: ");
    float inch;
    scanf("%f", &inch);
    printf("In feet : %f\n", inch / 12);
}
void cmtoinch()
{
    printf("Enter the value in cm: ");
    float cm;
    scanf("%f", &cm);
    printf("In inch : %f\n", cm * 0.393701);
}
void poundtokg()
{
    printf("Enter the value in pound: ");
    float pound;
    scanf("%f", &pound);
    printf("In kg: %f\n", pound * 0.453592);
}

int main()
{
    int choice;
    printf(" for kms to miles press 1 \n for inches to foot press 2\n for cms to inche press 3\n for pound to kgs press 4\n Enter the number for your conversion here =\n");

    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        kmtomiles();
        break;
    case 2:
        inchestofeet();
        break;
    case 3:
        cmtoinch();

        break;
    case 4:
        poundtokg();
        break;

    default:
        printf("conversion not available \n ");
        break;
    }

    return 0;
}

// IDEAL way 
/* #include <stdio.h>

// Function prototypes
void kmtomiles();
void inchestofeet();
void cmtoinch();
void poundtokg();

int main() {
    int choice;

    // Display menu and prompt user for choice
    printf("Select the conversion type:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Inches to Feet\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%i", &choice);

    // Perform the selected conversion
    switch (choice) {
        case 1:
            kmtomiles();
            break;
        case 2:
            inchestofeet();
            break;
        case 3:
            cmtoinch();
            break;
        case 4:
            poundtokg();
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// Function to convert kilometers to miles
void kmtomiles() {
    float km;
    printf("Enter the value in kilometers: ");
    scanf("%f", &km);
    printf("In miles: %.2f\n", km * 0.621371);
}

// Function to convert inches to feet
void inchestofeet() {
    float inch;
    printf("Enter the value in inches: ");
    scanf("%f", &inch);
    printf("In feet: %.2f\n", inch / 12);
}

// Function to convert centimeters to inches
void cmtoinch() {
    float cm;
    printf("Enter the value in centimeters: ");
    scanf("%f", &cm);
    printf("In inches: %.2f\n", cm * 0.393701);
}

// Function to convert pounds to kilograms
void poundtokg() {
    float pound;
    printf("Enter the value in pounds: ");
    scanf("%f", &pound);
    printf("In kilograms: %.2f\n", pound * 0.453592);
}
*/