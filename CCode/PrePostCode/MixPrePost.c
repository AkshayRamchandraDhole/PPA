#include<stdio.h>

//i++ + j++ how this operation works 
//1) value of j is increment by 1
//2) then value of i increment by 1
//3) at last addition operation is performed

void main(){
int i=10,j=20,a,b;
a=++i + ++j;//i=11 j=21  
printf("A=%d\t",a);
b=i++ + j++;//i=12 j=22
printf("B=%d\t",b);
//i=12 + j=23
a=i++ + ++j;//i=13 j=23

printf("A=%d\t",a);
printf("I=%d\t J=%d\n",i,j);

}
