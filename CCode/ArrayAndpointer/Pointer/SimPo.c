#include<stdio.h>
void main(){
int a=10;
int *ptr=&a;
int b=20;
int *ptr1=&b;
printf("Ptr=%p\n",ptr);
/*
printf("A=%d\n",a);//print value of a
printf("Addrr=%p\n",&a);//print Address of a 
printf("PTR=%p\n",&ptr);//print the Address of Pointer
printf("PTRAddrr=%p\n",ptr);//print the Address of a
printf("PtrUD=%d\n",ptr);//Print Garbage Value
*/
}
