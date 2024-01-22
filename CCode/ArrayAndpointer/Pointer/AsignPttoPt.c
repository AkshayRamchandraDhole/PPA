#include<stdio.h>
void main(){
int age=132,a=10;
int *iptr=&age;
int *ip=&a;
char ch='a';
char *cptr=&ch;

printf("Before Assigning.....\n");
printf("Age=%d\n",*iptr);//Dereferncing access to data and print Age=22
printf("Ch=%d\n",*cptr);//dereferencing access to data and print ascii value of a=97

//iptr contain address of 132 i.e 100
//cptr contain adddress of a i.e 300
//ip conatin address of 10 i.e 400

//   SAME POINTER CONCEPT

//printf("A=%d\n",*ip);//10
//printf("IPTR=%d\n",*iptr);132
//iptr=ip; 

//printf("A=%d\n",*ip);//10
//printf("IPTR=%d\n",*iptr);//10

//Now iptr contain 400

//iptr=cptr;

//now iptr=contain 300 but after printing it print 33889 

cptr=iptr;

//Now the cptr contain address 0of 100


//Now Iptr conatin address 400 if we given ip and then it get acess to data
printf("After Assigning......\n");
printf("Iptr=%d\n",*iptr);//132
printf("Cptr=%d\n",*cptr);//-124 explaination:- Rnage of character is from -128 to 127 when it exceeds the limit of 127 it does round off.(i.e -128,-127.,-124......127)
																		//	|------	---|
																							
}
