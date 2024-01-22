/*	*Function:-
 *
 *	1) Classsification of Functions:-
 *					1) Function are divided upon development of the function.There are two types of function:
 *						
 *						1) User Defined Function
 *						2) Library/Pre-Defined Function
 *
 *	1) User Defined Function:-
 *				1) These function are sometimes referes to as programmers defined function.  
 *
 *
 * */

#include<stdio.h>
void println();
int add(int,int);
int sub(int x,int y);

void main(){
int a,b,sum,diff;
printf("Enter Value of A and B");
scanf("%d%d",&a,&b);

sum=add(a,b);
diff=sub(a,b);
println();

printf("Sum=%d\n",sum);
printf("Diff=%d\n",diff);

}
void println(){
printf("\n");
}

int add(int a,int b){
return a+b;
}
int sub(int a,int b){

return a-b;
}

