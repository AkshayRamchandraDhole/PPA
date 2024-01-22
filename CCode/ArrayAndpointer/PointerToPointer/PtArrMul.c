#include<stdio.h>
void main(){
int arr[2][2]={1,2,3,4};
int (*ptr)[2][2]=arr;
printf("%d\t %d\n",(*(*ptr+0)+0),(*(*arr+1)+1));
}
