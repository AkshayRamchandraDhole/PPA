#include<stdio.h>
void main(){
int a=10,b=20;
if((++a!=10) || ++b)
	printf("Hello...\n");
printf("A=%d\n",a);
printf("B=%d\n",b);
}
