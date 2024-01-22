#include<stdio.h>
void main(){
int a=10,b=20,c=30;
int *arr={&a,&b,&c};
printf("%d\t%d\t%d\n",a,b,c);//print 10,20,30
printf("%d\t%d\t%d\n",*(*(arr+0)),*(*(arr+1)),*(*(arr+2)));
}
