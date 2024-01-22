#include<stdio.h>
void main(){
char ch='A';
switch(ch){
	case 'a':
	case 'A':
		printf("A or a\n");
	break;
	case 'e':
	case 'E':
		printf("E or e\n");
	break;
	case 'p':
	case 'P':
		printf("P or p\n");
	break;

	deafult:
	printf("Default..\n");
}
}
