

//  2) Function with i/p and no o/p:-
//  					When we call function we provide a parameter that parameter are called actual parameter.
//  					when we define a function we provid a parameter that parameter are called formal parameter.

#include<stdio.h>
void printsum(int,int);
void main(){
int a,b;
printf("Enter Value of A and B:");
scanf("%d%d",&a,&b);

printsum(a,b);//actual parameter a,b

printf("Enter Value of A and B:");
scanf("%d%d",&a,&b);

printsum(a,b);

}

void printsum(int x,int y)//formal parameter x,y
{
	printf("Sum of =%d and %d is %d\n",x,y,x+y);

}

