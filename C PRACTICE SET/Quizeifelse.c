#include<stdio.h>
int main(){
    float mks ;
    printf("Enter your mks to know your grades: \n");
    scanf("%f",&mks);
    if(mks>=90&&100>=mks){
        printf("Grade is A\n");
    }
  
    else if(mks>=80&&90>=mks){
        printf("Grade is B\n");
    }
  
    else if(mks>=70&&80>=mks){
        printf("Grade is C\n");
    }
  
   else if(mks>=60&&70>=mks){
        printf("Grade is D\n");
    }
  
   else if(mks>=50&&60>=mks){
        printf("Grade is E\n");
    }
  
    else if(40>=mks){
        printf("Grade is F\n");
    }
  
    return 0;
}