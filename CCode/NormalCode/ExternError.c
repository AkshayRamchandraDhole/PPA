#include<stdio.h>
int a=30;
extern int b;
void main(){
int c=40;
extern int d;
printf("%d\n",a);
//printf("%d\n",b);//Undefined Reference to b
printf("%d",c);
//printf("%d\n",d);//UnDefined Reference to d and Id return 1 Exit Status
}
