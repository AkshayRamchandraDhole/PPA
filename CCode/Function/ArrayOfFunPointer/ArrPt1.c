#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main(){
	int(*arr[4])(int,int)={add,sub,mul,div};
	for(int i=0;i<4;i++)
		arr[i](5,4);

}
void add(int a,int b){
	printf("Add:%d\n",a+b);
}
void sub(int a,int b){
	printf("Sub:%d\n",a-b);
}
void mul(int a,int b){
	printf("Mul:%d\n",a*b);
}
void div(int a,int b){
	printf("Div:%d\n",a/b);
}
