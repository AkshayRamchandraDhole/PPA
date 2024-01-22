// Two identifier have same scope if and only if their scope terminates at the same point.

#include<stdio.h>
void fun();// fun prototype scope
int c;//gobal scope
void main(){
	int a,b;
	printf("A and B have same scope\n");
	printf("They have local scope\n");
	fun();

}
int d;
void fun(){
	printf("C and D have same scope\n");
	printf("They have gobal scope\n");
}
