//Operation on Pointer
// 1) Referncing Operation:-
// 				1) In this operation a pointer variable is made to refer to an object
// 				2) The refernce to an object can be with the help of reference operator (&) address of operation
// 				3) Example :- 	int a=10;  same for another datatype
// 						int *iptr=&a;


// 2) DeReferencing Operation:-
// 				1) In this operation allow a pointer to retrive data from certain address 
// 				2) A pointer can be dereference by using a derefencing operator *

	//		*
// 	a=[ 10 ]<---------------------iptr=[  100   ]                    
//address 100  103                         200     207
//

#include<stdio.h>
void main(){
	int a=10;
	int *iptr=&a;
//	char ch;
//	char cptr=&ch;

	printf("Size Of pointer is:%ld\n",sizeof(iptr));//To print the Sizeof any dataype or pointer use %ld
	printf("Value Of A=%d\n",a);
	printf("Value by Dereference *iptr is=%d\n",*iptr);//For Accesing values using pointer use %d followed by *ptr
	printf("Address of pointer is=%p\n",iptr);
//	printf("Size of Char=%ld",sizeof(ch));


}
