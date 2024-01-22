/*	1) strlen():-
 *			1) Prototye:
 *					int/long strlen(const char *)
 *			2) It is used to find length of a string.
 *			3) Input:- String literal constant or character pointer.
 *			4) output:- It returns length of string.
 *
 * */


#include<stdio.h>
#include<string.h>
void main(){
char s[10]="Akshay";
char *p="Gaurav";
printf("The length of string1:%d\n",s);//garbage value
printf("The length of string2:%d\n",*p);//garbage value
printf("The length of string using STRLEN():%ld\n",strlen("Hello"));//print length of string i.e 5
}
