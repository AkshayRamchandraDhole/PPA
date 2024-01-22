#include<stdio.h>
void main(){
int a=5;
int b=3;
switch(a,b)//if we add a and b in switch then here after 3 all statement execute because small of a and b is 3.Here also we not add break statement
{
	case 1:
		printf("One\n");
	case 2:
		printf("Two\n");
	case 3:
		printf("Three\n");
	case 4:
		printf("Four\n");
	case 5:
		printf("Five\n");
	default:
		printf("Default\n");
	case 6:
		printf("Six\n");
}
}
