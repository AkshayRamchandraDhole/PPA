#include<stdio.h>
void main(){
int a=10;
int *iptr=a;
printf("Value of Variable is=%d\n",a);//10
//printf("Pointer Holds=%p\n",iptr);//print offset Address
printf("Pointer Holds=%d\n",*iptr);//10
printf("Pointer Hold=%d\n",*iptr);//Segmentation Fault(Core Dump)
}
