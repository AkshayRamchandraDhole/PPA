#include<stdio.h>
void main(){
char ch='z';
//int *iptr=&ch;//shows the warning but gives access to all data
char *iptr=&ch;

float f=10.5f;
float *fptr=&f;

printf("Value of Ch=%c\n",ch);//Print z
printf("Pointer Holds=%p\n",iptr);//Print Address
printf("Pointer Holds=%c\n",*iptr);// if we use %d print Garbage Value and %p print offset address



printf("Value of F=%f\n",f);//Print 10.5
printf("Pointer Holds=%p\n",fptr);//Print Address
printf("Pointer Holds=%f\n",*fptr);//DeReferencing Access to data






}
