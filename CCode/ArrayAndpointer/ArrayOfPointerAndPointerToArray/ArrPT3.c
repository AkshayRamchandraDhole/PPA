#include<stdio.h>
void main(){
int a[3]={1,2,3};
int b[3]={4,5,6};
int c[3]={7,8,9};

int *arr[3]={a,b,c};

printf("Sum=%d\n",(*(*(arr+0)))+(*(*(arr+1)))+(*(*(arr+2))));//print 12 i,e 1+4+7=12


//printf("%d\n%d\n%d\n",(*(*(arr+0))),(*(*(arr+1))),(*(*(arr+2))));//print 1,4,7

//printf("%p\n%p\n%p\n",(*(*(arr+0))),(*(*(arr+1))),(*(*(arr+2))));//print offset address

//printf("%ld\n%ld\n%ld\n",(*(*(arr+0))),(*(*(arr+1))),(*(*(arr+2))));//print 1,4,7


//printf("%p\n%p\n%p\n",&a,&b,&c);//print starting address of array

//printf("%d\n%d\n%d\n",a,b,c);//Garbage value
 
//printf("%p\n%p\n%p\n",a,b,c);//print address of array

}
