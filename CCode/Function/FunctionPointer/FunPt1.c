#include<stdio.h>
int add(int a,int b);
int sub(int x,int y);
float mul(float k,float v);
double div(double n,double p);
void main(){
	float ans;
	int(*ptr)(int,int)=add;
	int(*ptr1)(int,int)=&sub;
	float(*ptr2)(float,float)=&mul;
	double(*ptr3)(double,double)=&div;

	(*ptr)(10,10);//calling function by dereferncing function pointer.

	ptr1(100,10);//calling by using function pointer name

	ptr2(10.0f,10.0f);
	ptr3(100.0,10.0);

}

int add(int a,int b){
	printf("Add:%d\n",a+b);
}
int sub(int x,int y){
	printf("Sub=%d\n",x-y);
}
float mul(float k,float v){
        printf("Sub=%f\n",k*v);
}
double div(double n,double p){
        printf("Sub=%f\n",n/p);
}

