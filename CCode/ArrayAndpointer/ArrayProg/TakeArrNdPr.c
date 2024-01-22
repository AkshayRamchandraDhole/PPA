#include<stdio.h>
void main(){
int a[3];
printf("Enter Three Array Element:");
scanf("%d%d%d",&a[0],&a[1],&a[2]);
printf("%d\t%d\t%d\n",a[0],a[1],a[2]);
printf("%p\t%p\t%p\n",&a[0],&a[1],&a[2]);

}
