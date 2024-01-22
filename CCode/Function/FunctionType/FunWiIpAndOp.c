
// 	4) Function with Ip And Op:
// 				1) Morethan one value can be indirectly returned to the calling functon by making the use of pointers.
// 				2) The pointer can also be used to pass arguments to a function

#include<stdio.h>
void fun(int *,int *);
void main(){
	int a=100,b=20;
	printf("\n A=%d\tB=%d\n",a,b);
	fun(&a,&b);
	printf("\n A=%d\tB=%d\n",a,b);

}
void fun(int *aptr,int *bptr){
printf("\n APTR=%d\t BPTR=%d\n",*aptr,*bptr);
(*aptr)++;
(*bptr)++;
printf("\n APTR=%d\tBPTR=%d\n",*aptr,*bptr);
}
