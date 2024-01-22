/*	1) In C language string datatype is not separately available,character pointer are used to represent string.
 *	2)Thus the type of string literal
 *						const char*str="Akshay";
 *	3) The constant pointer refers to the address of thee first element of the string.
 * */

#include<stdio.h>
void main(){
	const char *st="xyz";
	printf("The first character of string literal \"AKshay\" is %c\n",*"akshay");
	printf("The second character of string litera \"AKshay\" is %c\n",*"akshay"+1);
	printf("The size of constant char is:%ld\n",sizeof(st));

}
