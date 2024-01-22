#include<stdio.h>
void main(){
int a[3]={1,2,3};
int b[3]={4,5,6};
int c[3]={7,8,9};
int *arr={a,b,c};

//printf("%p\t%p\t%p\n",&arr[0],&arr[1],&arr[2]);

//printf("%p\t%p\t%p\n",(*(arr+0)),(*(arr+1),(*(arr+2))));

//printf("%d\t%d\t%d\n",(*(*(arr+0))),(*(*(arr+1)),(*(*(arr+2)))));

}
