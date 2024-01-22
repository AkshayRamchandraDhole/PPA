/*  NOTE:--- 1) The initalizes in the initialization list can be braced in two initialized elements of the individual rows.
 *  	     2) if the no. of initializers within the inner breace is less than row size remaining location of the corresponding row get initialized to 0if integer and 0.0 if float/double,\0 if character.
 *
 *
 */

#include<stdio.h>
void main(){
/*
// 1) Scenario	
int arr[3]={1,2,3};

printf("%d\t%d\t%d\n",arr[0],arr[1],arr[2]);
printf("%d\t%d\t%d\n",(*(arr+0)),(*(arr+1)),(*(arr+2)));
*/

// 2) Scenario

int arr[3][3]={{1,2},3,4,5,{6}};// {} represents a row
printf("%d\t%d\t%d\n",arr[0][0],arr[0][1],arr[0][2]);
printf("%d\t%d\t%d\n",arr[1][0],arr[1][1],arr[1][2]);
printf("%d\t%d\t%d\n",arr[2][0],arr[2][1],arr[2][2]);

 
 /* 3) Scenario
 
char ch[2][3]={{'a','k'},'b','c','d'};
printf("%c\t%c\t%d\n",ch[0][0],ch[0][1],ch[0][2]);
printf("%c\t%c\t%c\n",ch[1][0],ch[1][1],ch[1][2]);
*/

    /*4) Scenario

int a[2][2]={{1,2},{3}};
printf("%d\t%d\n",(*(*(a+0))+0),(*(*(a+0))+1));
printf("%d\t%d\n",(*(*(a+1))+0),(*(*(a+1))+1));
*/



}
