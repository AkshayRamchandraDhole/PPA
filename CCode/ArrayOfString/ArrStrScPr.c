/*   Array of String:- (2D Character array)
 *
 *   			1) Strinf itself is stored in 1D character array.The list of string can be stored by creating an array of 1D i.e 2D character array.
 *   1) Declaration of array of string:
 *   					char arr[2][30];
 *   					char arr1[5][5];
 *
 *   20 Initialization of array:
 *   				1) Using string literal:
 *   							char a[][15]={"Akshay","Gaurav"}
 *
 *   				2) Using list of character initializer:
 *   									char  arr[][10]={{'a','b','c'},
 *   											 {'x','y','z'}};
 *   						
 *
 * */
#include<stdio.h>
void main(){
char s[10][20];
int i=0,n;
printf("how many student:");
scanf("%d",&n);

printf("Enter Name:");
for(int i=0;i<n;i++)
	scanf("%s",s+i);
for(int i=0;i<n;i++)
	printf("%s",s+i);
}
