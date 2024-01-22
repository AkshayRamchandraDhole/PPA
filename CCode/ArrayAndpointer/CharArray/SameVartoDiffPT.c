#include<stdio.h>
void main(){
int a=10;
double *dp=&a;
int *ip=&a;


printf("Value of Variable=%d\n",a);//print 10

printf("Integer Type Pointer=%p\n",ip);//print Address

printf("Integer Type Pointer=%d\n",*ip);//Dereference print 10

//sizeof datatype

printf("Integer Size=%ld\n",sizeof(*ip));//print sizeof pointer
printf("Float Size=%ld\n",sizeof(*dp));//print sizeof pointer


//Checking access
int b=20;
double *d;
int *i;

printf("Integer  Pointer=%p\n",i);//print Address
printf("Float  Pointer=%p\n",d);//print Address
printf("Integer Type Pointer=%ld\n",sizeof(i));//print 8 and if use *ip then print 4 same for double
printf("Double Type Pointer=%ld\n",sizeof(d));//above line explain



/*
printf("Integer Type Pointer=%p\n",*dp);//print Address here we use double type of pointer
printf("Integer Type Pointer=%f\n",*dp);//print not understanding data 
*/



}
