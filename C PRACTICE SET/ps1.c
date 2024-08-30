
// CHAPTER 1- PRACTICE SET
// 1.
// Write a C program to calculate area of a rectangle:

// a.
// Using hard coded inputs.
// #include<stdio.h>
// int main(){
//     int l=30,b=10;
//     int area=l*b;
//     printf("Area of rectangle is %d",area);
//     return 0;
// }
// b.
// Using inputs supplied by the user.
// #include<stdio.h>
// int main(){
//     int l,b;

//     printf("Enter the lenght: \n");
//     scanf("%d",&l);
//     printf("Enter the breadth :\n");
//     scanf("%d",&b);
//     int area=l*b;
//     printf("Area of Rectangle with L = %d and B = %d is %d",l,b,area);
//     return 0;
// }
// 2.
// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
// #include <stdio.h>
// int main()
// {
//     float r, h;

//     float pi = 3.14;
//     printf("Enter the radius of circle :\n");

//     scanf("%f", &r);
//     printf("Enter the height  of cylinder:\n");
//     scanf("%f", &h);
//     float area_of_circle = r * r * pi;
//     float vol_of_cylinder = r * r * pi * h;

//     printf("Area of circle with radius %f is %f \n", r, area_of_circle);
//     printf("vol of cylinder with radius %f and height %f is %f \n", r, h, vol_of_cylinder);

//     return 0;
// }

// 3.
// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
// #include<stdio.h>
// int main(){
//     float c ,f;
//     printf("Enter the temp in cesius scale :\n");
//     scanf("%f",&c);
//     f=(c*(9.0/5.0)+32);
//     printf("Temp in fahrenheit is %f",f);
//     return 0;
// }
// REVERSE
// #include<stdio.h>
// int main(){
//     float c ,f;
//     printf("Enter the temp in fahrenheit scale :\n");
//     scanf("%f",&f);
// c=(f-32)*(5.0/9.0);
//     printf("Temp in celsius is %f",c);
//     return 0;
// }
// 4.
// Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest
// Write a program to calculate Simple interest for a set of values

#include <stdio.h>

int main() {
    float P, R, T, SI;

    printf("Enter principal amt (rupees) :\n");
    scanf("%f", &P);

    printf("Enter Rate of Interest (in percentage):\n");
    scanf("%f", &R);

    printf("Enter Time Period (Years):\n");
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    printf("Simple Interest is %f\n", SI);

    return 0;
}
