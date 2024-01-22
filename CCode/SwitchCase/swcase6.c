#include<stdio.h>
void main(){
char ch='E';
switch(ch){
	case 'A':
	case 'a':
		printf("A or a\n");
	case 'e':
	case 'E':
		printf("E or e\n");
	case 'i':
	case 'I':
		printf("I of i\n");
	default:
		printf("Default\n");
}
}
