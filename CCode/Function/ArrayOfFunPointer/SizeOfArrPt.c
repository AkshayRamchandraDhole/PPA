/*	Array Of Pointer:-
 *				int(*arr[5])(int,int)
 *			1) Like array of pointer it is possible to create array of pointer to function type i.e array of pointer.
 *			2) 'arr[5]' is an array of pointer ot function that accept 2 integers and return an integer.
 *
 * */
#include<stdio.h>
void main(){
int(*arr[5])(int,int);
printf("%ld\n",sizeof(arr));
}
