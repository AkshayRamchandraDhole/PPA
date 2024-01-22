/* 	1) Linkage :-
 *  		     1) Linkage is the process by which the identifier declared in different scopes or the same scope more than once are made to refer to the same data object or the function.
 *  		     2) There are 3 different types of linkage:
 *  		     			
 *  		     			1) External Linkage
 *  		     			2) Internal Linkage
 *  		     			3) No Linkage
 *  		1) External Linkage :-
 *  					1) c Language allows a program to be spread across two or more files compile seperately and then link together.
 *  					2) An identifier with an external linkage can be used anywhere within multi-file program.
 *  					3) The linkage of an identifier can be made external by using extern storage class specifier in the declaration statement.
 *  					4) All global variables and function by default have external linkage.
 *  					5) If global variable is declared static it cannot be used for external linkage i.e cannot be used by other files.
 *
 * */
#include<stdio.h>
void fun();
void main(){
extern int a;
printf("In main value of a is %d\n", a);
fun();
}
#include<stdio.h>
int a=20;
void fun(){
printf("In fun value of a=%d\n",a);
}

/*				6) The object with an external linkage are accessible within all translation unit of a program anf hence must be uniquely defined.
 *				7) Multiple definition of identifier with external linkage in diff. translation unit lead to linker error.
 *
 * */
