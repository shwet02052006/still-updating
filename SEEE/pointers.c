#include <stdio.h>
int main()
{
int a=5;
int *p=&a;// in print section just P will give address of  a if we put *P we get value present in a 
int c=(int)&p;


printf("a          =%i\n",a);
printf("a with *p  =%i\n",*p);
printf("&a         =%i\n",&a);
printf("&a with p  =%i\n",p);
printf("&p         =%i\n",&p);
printf("&p with c  =%i\n",c);

// NULL ptr 
int* p2 = NULL; 

	// derefencing only if the pointer have any value 
	if (p2 == NULL) { 
		printf("Pointer does not point to anything"); 
	} 
	else { 
		printf("Value pointed by pointer: %d", *p2); 
	} 



    return 0;
}
