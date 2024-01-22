#include<stdio.h>
void main(){
int ch=97;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("%c\t",ch);
	//printf("%c\t",ch++);
	//ch++;
	ch+=2;
	}
	printf("\n");
}
}
