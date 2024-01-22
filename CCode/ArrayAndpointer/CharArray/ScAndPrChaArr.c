#include<stdio.h>
void main(){
char c[5];
printf("Enter Array:");
for(int i=0;i<5;i++)
	scanf("%c",&c[i]);
for(int j=0;j<5;j++)
	printf("Arr=%c\n",c[j]);
}
