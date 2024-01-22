#include<stdio.h>
void main(){
int ch=97;
for(int i=0;i<3;i++){
	for(int j=0;j<=i;j++){
	printf("%c\t",ch);
	ch+=1;
	}
	printf("\n");
}
}
