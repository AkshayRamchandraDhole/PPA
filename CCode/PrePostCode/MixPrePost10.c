#include<stdio.h>
void main(){
int a,i=45,j=18;
//a=++i + ++i + ++i + ++i
//a=(i+i) + ++47 + ++48
//a=(47+47) + ++47 + ++48
//a=94 + 48 + ++48
//a=94 + 48 + 49
a=++i + ++i + ++i + ++i;
printf("A=%d\n",a);
printf("I=%d\n",i);

//a=++j + ++j + ++j + ++j
//a=(j+j) + ++20 + ++21
//a=(20+20) + 21 + ++21
//a=40 + 21 + 22
a=++j + ++j + ++j + ++j;
printf("A=%d\n",a);
printf("J=%d\n",j);
}
