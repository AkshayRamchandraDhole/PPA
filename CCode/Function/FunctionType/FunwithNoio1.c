#include<stdio.h>

//A void function call expression evaluates to void hence such an expression cannot be placed on right side of assignment operator

void printsum(void);
void main(void){
	int a;
	a=printsum();// error void value not ignored as it ought to be  
	//printsum();
	printf("The Value of a:%d\n",a);

}
void printsum(){
printf("Sum 2+3:%d\n",2+3);
}
