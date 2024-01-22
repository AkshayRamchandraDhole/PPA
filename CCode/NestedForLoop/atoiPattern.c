#include<stdio.h>
void main(){
int ch=97;
for(int i=0;i<4;i++){
	for(int j=0;j<7;j++){
		if(ch>=123){
		break;
		}
	printf("%c\t",ch++);
	} 
	printf("\n");
}
}
