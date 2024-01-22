#include<stdio.h>
void main(){

	//Integer number and Pointer Size
int a=10;
int *ptr=&a;
printf("SizeofInt=%ld\n",sizeof(a));
printf("SizeOfIntPointer=%ld\n",sizeof(ptr));

     //Character and Pointer Size
char ch='A';
char *ptr1=&ch;
printf("SizeofChar=%ld\n",sizeof(ch));
printf("SizeOfCharPointer=%ld\n",sizeof(ptr1));

     //Float number and Pointer Size
float b=10.0f;
float *ptr2=&b;
printf("SizeofFloat=%ld\n",sizeof(b));
printf("SizeOfFloatPointer=%ld\n",sizeof(ptr2));

     //Double number and Pointer Size
double c=1;
double *ptr3=&c;
printf("SizeofDouble=%ld\n",sizeof(c));
printf("SizeOfDoublePointer=%ld\n",sizeof(ptr3));

     //Long number and Pointer Size
long d=15l;
long *ptr4=&d;
printf("SizeofLong=%ld\n",sizeof(d));
printf("SizeOfLongPointer=%ld\n",sizeof(ptr4));

     //Short number and Pointer Size
short e=18;
short *ptr5=&e;
printf("Sizeofshort=%ld\n",sizeof(e));
printf("SizeOfShortPointer=%ld\n",sizeof(ptr5));



}
