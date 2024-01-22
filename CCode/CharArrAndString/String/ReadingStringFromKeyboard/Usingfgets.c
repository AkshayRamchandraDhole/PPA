/*    4) by using fgets() :-
 *    				1) The prototype of function is:
 *    								char *fgets(char *str,int n,file *stream);
 *				2) char *str:- pointer to an array of character where string is copied.
 *				3) int n:- maximum no. of character to be copied into str (includeing he terminating null character).
 *				4) file *stream:- Pointer to a file object that identifies an input stream.stdin can be used as argument to read from standard ip i.e keyboard.
 */
 
#include<stdio.h>
void main(){
	char p[10];
	printf("Enter Name:");
	fgets(p,75,stdin);
	printf("%s\n",p);

}
