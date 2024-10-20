
#include<stdio.h>
// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    // Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");

    // Print values
    printf("My string: %s", s1.myString);

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    return 0;
}


//simpelar format 
// Create a structure
// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};

//   // Print values
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }
// EXAMPLE 



// struct Car {
//   char brand[50];
//   char model[50];
//   int year;
// };

// int main() {
//   struct Car car1 = {"BMW", "X5", 1999};
//   struct Car car2 = {"Ford", "Mustang", 1969};
//   struct Car car3 = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

//   return 0;
// }