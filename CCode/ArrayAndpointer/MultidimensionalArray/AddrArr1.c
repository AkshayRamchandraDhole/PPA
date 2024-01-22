#include<stdio.h>
void main(){
int a[2][2]={1,2,3,4};
printf("%p\t%p\n",&a[0][0],&a[0][1]);
printf("%p\t%p\n",&a[1][0],&a[1][1]);
}
