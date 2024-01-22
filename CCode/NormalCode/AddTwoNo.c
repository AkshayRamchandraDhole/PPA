#include<stdio.h>
void add();
void main(){
int a=10,b=30,c;
printf("A is:%d\n",a);
printf("Address is:%p\n",&a);
printf("B is:%d\n",b);
printf("Address is:%p\n",&b);
printf("C is:%d\n",c);
add();
}
void add(){
printf("Add is:%d",10+20);
}
