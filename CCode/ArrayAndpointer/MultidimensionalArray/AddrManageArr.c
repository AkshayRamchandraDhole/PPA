#include<stdio.h>
void main(){
int a[3][3]={10,20,30,40,50,60,70,80,90};
printf("%p\n",a);
printf("%ld\n",sizeof(a));

printf("%d\t%d\t%d\n",(*(*(a+0)+0)),(*(*(a+1)+1)),(*(*(a+1)+3)));

//			| 10 | 20 | 30 |
//	Address		500  504  508
//			| 40 | 50 | 60 |
//	Address		512  516  520
//			| 70 | 80 | 90 |
//	Address		524  528  532

// how this manage:-
// 			*(*(array + row *sizeof (Whole array)) + column * sizeof (dataype))
//
// 			arr[1][1] = *(*(500+1)*sizeof (whole array) + 1 * sizeof (dataype))
// 				  = *(*(500 + 1 * 12) + 1 * 4)
// 				  = *(*(512) + 4 )  512:- This is base address it takes us to the address of first element of array
// 				  = 516 // value at 516 is 50
}
