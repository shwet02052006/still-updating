#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *ptr=&a[0];//or *ptr=a;
    
 
    printf("%d",*ptr+2);
    return 0;
}