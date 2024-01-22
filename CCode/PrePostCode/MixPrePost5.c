#include<stdio.h>
void main(){
int a,i=10,j=20;
//a=i++ + ++i
//a=10++ + ++11
//a=10 + ++11
//a=10 + 12 and value of i=12
//a=22
a=i++ + ++i;//a=22
printf("A=%d\n",a);
printf("I=%d\n",i); 

//a=++20 + 21++
//a=21 + 21++
//a=21 + 22
//a=43 and value of j=22
a=++j + j++;
printf("A=%d\n",a);
printf("J=%d\n",j);
}
