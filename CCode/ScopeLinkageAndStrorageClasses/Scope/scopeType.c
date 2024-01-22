/*	Scope:-
 *		1) The scope of an identifier is the region of the program within which the identifier is visible i.e it can be used.
 *		2) In C language there are 4 type of the scope:
 *
 *			1) File Scope/Global Scope :-
 *							1) Terminates with the end of source file.
 *			
 *			2) Block Scope/Local Scope :-
 *							1) Terminates with the end of its associated block.
 *
 *			3) Function Prototype Scope :-
 *							1) Terminates with end of function declaration.
 *			
 *			4) Function Scope :-
 *						1) Terminate with the closing brace of the cloaing defination.
 *
 * */

#include<stdio.h>
int sum_diff(int a,int b);// fun prototype scope
int diff;
void main(){
	int n1,n2,sum;
	printf("Enter Two number:");
	scanf("%d%d",&n1,&n2);
	
	sum=sum_diff(n1,n2);

	printf("Sum is=%d\n",sum);
	printf("Diff is=%d\n",diff);


}
int sum_diff(int f,int g)// f and g have function scope
{ 
 int sum;
 if(f!=g)
	 goto label;
 else{
 	sum=2*f;
	diff=0;
	return sum;
 }

label:
 	sum=f+g;
	diff=f-g;
	return sum;

}
