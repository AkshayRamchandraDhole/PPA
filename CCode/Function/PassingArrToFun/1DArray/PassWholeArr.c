#include<stdio.h>
void fun(int*);
void main(){
int arr[3]={1,2,3};
fun(arr);
}
void fun(int *p){
for(int i=0;i<3;i++){
	printf("A=%d\n",*(p+i));
}
}
