/* Pointer and int------
 *                     |- can be added and substracted  
 * Pointer and char----
 
 1) Addition,Multiplication and division of 2 pointer not possible but substraction of 2 pointer is possible
 2) Bitwise operation(and,or,not) not possible on a pointer.
 3) We cannot assign one type of pointer to annother type of pointer.
 4) Formula to substract pointer

 ***Null Pointer:-
 		1) Null pointer is a special pointer that does not point anywhere.'
		2) It does not hold the address of any object or function.
		3) It has numberic value zero.

	Example:-
		int *nptr=0;
		int *fptr=Null;

   */

#include<stdio.h>
void main(){
//int *nptr=0;it allows
int *nptr=NULL;

//int *cptr=7ffd4e72090;this not allow and we can not allow to assign the adddress to pointer it is assigned by OS virtually.

//int *cptr;
//printf("CPTR=%p\n",cptr);//Segementation Fault (core dumped) and here we use %p and cptr then it print Nil

printf("NPTR=%d\n",*nptr);//Segmentation Fault (core dumped) And 

//printf("NPTR=%p\n",nptr);//I try to print address of null pointer it prints (Nil) and 

//printf("NPTR=%d\n",nptr);//here we use %d and nptr it print 0
}
