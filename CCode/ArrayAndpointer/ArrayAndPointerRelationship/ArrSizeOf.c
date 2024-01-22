//  1) The name of array refers to the address of first element of array.
//  2) But their is an exception to this rule when an array name is operand of sizeof() operator it doess not decompose to the address of first element



#include<stdio.h>
void main(){
int arr[3]={10,20,30};

// First  Statement Proved Here 

printf("%p\n",arr);// it print first address i.e 100
printf("%p\n",arr+1);// it print second address i.e 104
printf("%p\n",arr+2);// it print third address i.e 108

// Second Statement proved here


printf("The result of sizeof operator is=%ld\n",sizeof(arr));// it print 12


}
