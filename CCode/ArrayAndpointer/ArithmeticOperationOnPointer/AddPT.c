#include<stdio.h>
void main(){
int a=10;
int *ip=&a;

printf("A=%d\n",a);//10
printf("Ip=%d\n",*ip);//10 Dereferencing....

//a++;increment a by 1 i.e 11
//*ip++;//not increment but print garbage value


//printf("A=%d\n",a);//print 10
//printf("Ip=%d\n",*ip++);//print 10 because *(100)
					//  valueat(100)
					//  10 ++
	   //*
//a = 10<------ iptr=100
//add=100-103   add 200-207

// Increment of Pointer tmp=iptr
// 			iptr=iptr+1*sizeof datatype 
// 			    =100+1*4
// 			    =104


printf("A=%d\n",a++);//print 10
printf("Ip=%d\n",*ip++);//print 11
}
