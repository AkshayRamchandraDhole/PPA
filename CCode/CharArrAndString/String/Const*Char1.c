#include<stdio.h>
void main(){
const char *ptr="Akshay";
printf("PTR=%s\n",ptr);//print name Akshay
printf("PTR=%c\n",*ptr);//print A
*ptr++;
printf("PTR=%c\n",*ptr);//Print k
printf("PTR=%p\n",ptr);//print address
printf("PTR=%d\n",*ptr);//Ascii value of A i.e 65
printf("PTR=%p\n",ptr+1);//print next address

}
