#include<stdio.h>
void main(){
int a,b;
int *p=&b;
printf("AddressOfA=%p\n",&a);//print address of a
printf("AddressOfB=%p\n",&b);//print adress of b
printf("AdressofPtrA=%p\n",p);//display the address of b but only offset

}
