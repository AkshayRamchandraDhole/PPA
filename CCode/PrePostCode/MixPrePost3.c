#include<stdio.h>
void main(){
int a,i=20,j=30,k=40;
a=++i + ++j + ++k;
printf("A=%d\n",a);//93

a=--i + --j + --k;
printf("A=%d\n",a);

}
