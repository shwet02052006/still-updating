#include<stdio.h>
struct employee 
{ 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
}; // semicolon is important 
int main(){
    struct employee e1; // creating a structure variable 
strcpy(e1.name, "harry"); 
e1.code = 100; 
e1.salary = 71.22;
    return 0;
}