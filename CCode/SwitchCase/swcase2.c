#include<stdio.h>
void main(){
int a=2;//if a=2 then after case 2 all statement execute i.e Two,Three,Default because we not added break 
switch(a){
	case 1:
		printf("One\n");
	case 2:
		printf("Two\n");
	case 3:
		printf("Three\n");
	default:
		printf("Default\n");
}
}
