#include<stdio.h>
int x=18,y=7,z;//Gobal Variable
void fun(){
int c=30,d=40;
printf("C is;%d\n",c);
printf("D is:%d\n",d);
//printf("A is:%d\n",a);//Undeclare A
//printf("B is:%d\n",b);//Undeclare B
printf("X is:%d\n",x);
printf("Y is:%d\n",y);
//gun();//Implicit type of declaration
}

void gun(){
int e=60,f=70;
printf("E is:%d\n",e);
printf("F is:%d\n",f);
printf("X is:%d\n",x);
printf("Y is:%d\n",y);

}
void main(){
int a=10,b=20;//Local Variable
printf("A is:%d\n",a);
printf("B is:%d\n",b);
fun();
gun();
}
