#include<stdio.h>
void main(){
int a=25;
if(a>0 && a<10)
	printf("A is Between 0 and 10");
else if(a>10 && a<20)
	printf("A is Between 10 and 20");
else if(a>20 && a<30)
	printf("A is Between 20 and 30");
else 
	printf("Out of Range....");
}
