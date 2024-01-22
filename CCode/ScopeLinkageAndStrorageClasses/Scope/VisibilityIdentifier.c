#include<stdio.h>
void fun();
void main(){
int a=20;
printf("The value of a in main function:%d\n",a);
fun();
}
void fun(){
printf("The value of a in fun () id=%d",a);
}
