#include<stdio.h>
void main(){
char ch='A';//it takse Ascii value of a so case 65 execute and default also because we do not add break
switch(ch){
	case 'p':
		printf("One\n");
	case 'g':
		printf("Two\n");
	case 65:
		printf("Three\n");


	//case 'A'://Show An error duplicate case value because we use A prevoiusly which is 65 ascii value of A
	//	printf("Four\n");
	


	default:
		printf("Default\n");
	
}
}
