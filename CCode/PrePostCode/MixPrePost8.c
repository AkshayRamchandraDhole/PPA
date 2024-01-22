#include<stdio.h>
void main(){
int a,i=10,j=20;
//a=++i + ++i + ++i
//a=(i + i) + ++i
//a=(12 + 12) + ++12
//a=24 + 13
//a=37

a=++i + ++i + ++i;
printf("A=%d\n",a);
printf("I=%d\n",i);

//a=++j + ++j + ++j
//a=(j+j)+ ++j
//a=(22+22)+ ++22
//a=44 + 23
//a=67
a=++j + ++j + ++j;
printf("A=%d\n",a);
printf("J=%d\n",j);
}
