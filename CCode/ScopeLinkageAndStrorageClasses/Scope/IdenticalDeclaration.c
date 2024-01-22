/*	1) Identical Declaration :-
 *					1) It is possible to declare an identifier with a same name and same type more than once in the same scope .
 *					2) An identifier can have many identical declaration in the same scope.
 *					3) The Word identical means that the type of an identifier in all the declaration should be equivalent.
 * */
#include<stdio.h>
void main(){
extern int a;// Here a is only declared not defined so it has no memory allocated on RAM.
extern float b;// Error because they are only declared and it is not a gobal variable it goes to text section.
printf("Non identical declaration in same scaope\n");
printf("The value of a=%d\n",a);
}
