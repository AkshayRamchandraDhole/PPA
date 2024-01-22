/*		Function Pointer:-
 *				1) It is possible to create a pointer to any type (Even void type)
 *				2) Hence the creation of a pointer of a pointer to a funcrion is also possible.
 *				3) A pointer to a function commonly knows as function pointer.
 *				4) Function pointer is a variable that points to the starting address of a function.Function pointer store the start of executable code.
 *		5) Unlike normal pointerr the function points to code not data.
 *
 * */
#include<stdio.h>
int fa=1;
int fact(int);
void main(){
int n;
printf("Enter a Number:\n");
scanf("%d",&n);

int val=fact(n);

printf("%d\n",val);
printf("Factorial is:%d\n",fa);
}

int fact(int n){
for(int i=1;i<=n;i++)
	fa=fa*i;
return fa;
}



/*	Explanation:-
 *			1) Consider a function fact() which accept an integer and return an integer value.
 *			2) The prototype of function fact() is:
 *								int fact(int);
 *			3) A pointer to function is declared as:
 *								int (*ptr) (int)
 *								int fact (int)
 *			4) 'ptr' is a pointer to a function that accept an integer and return an integer value.
 *			5) Assigning or initializing a function pointer:
 *									int fact(int)
 *									int(*ptr)(int)
 *									ptr=fact;
 *			6) The address of the fact() is assigned to the function pointer as above mention.
 *			7) Here Function name is point to the first instruction address.
 *			8) At the time of function pointer assignment or initialization the function designator (name of function) must br known i.e declared or defined.
 *			9) The function designator implicitly refers to the starting address of the function.
 *
 *						ptr=fact;--
 *							   |- Are equivalent
 *						ptr=&fact;-
 *
 *
 * */
