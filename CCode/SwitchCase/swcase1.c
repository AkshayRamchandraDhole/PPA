#include<stdio.h>
void main(){
//int a=1;//if value of a and case is same then case statement execute and also if we not add break then all case statement execute
int a=4;//then default statement execute
switch(a){
//printf("Akshay");Warning:This Statement Never will execute
	case 1:
	printf("One");
	printf("Ashish");
	
	case 2:
	printf("Gaurav");
	printf("Akshu");//then only default statement excute if a=4

	default:
	printf("Default");
	printf("Akshay");
//	break;
}
}
