#include<stdio.h>
int large(int,int);
void main(){
int a,b;
printf("Enter A And B\n");
scanf("%d%d",&a,&b);
printf("%d",large(a,b));
}
int large(int x,int y){
	int large;
	if(x<y)
		large=y;
	else
		large=x;
	return large;
}

