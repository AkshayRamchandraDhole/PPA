#include<stdio.h>
void fun(int);
void main(){
int a[3]={1,2,3};
for(int i=0;i<3;i++)
	fun(a[i]);
}
void fun(int a){
	printf("A=%d\n",a);

}
