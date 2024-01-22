// Addition of 2 pointer never done

//ERROR:-  INVALID OPERANDS to BINARY


#include<stdio.h>
void main(){
int a=10,b=20;
int *ip1=&a;
int *ip2=&a;

ip1=ip1+1;

ip2=ip1+ip2;//cannot add 2 pointer

printf("IPTR1=%d\n",*ip1);
printf("IPTR2=%d\n",*ip2);

}

