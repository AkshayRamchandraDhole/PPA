#include<stdio.h>
void main(){
int i=10,j=20;
if(i++ || j++)//if i is true then it will not check 2nd condition so the value of i is change to 11 but value of j is 20
	printf("Hi\n");
printf("I=%d\n",i);
printf("J=%d\n",j);
if(i-- && j--)//here the value of i is decrement by 1 and j also decrement by 1 because here we use and operation which tells that both conditon true to go inside if
	printf("Hello\n");
printf("I=%d\n",i);
printf("J=%d\n",j);
}
