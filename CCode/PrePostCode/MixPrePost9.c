#include<stdio.h>
void  main(){
int a,i=20,j=30;
//a=++i + ++i + ++i + ++i
//a=(i+i)+ ++22 + ++23
//a= (22 + 22) + 23 + ++23
//a=44 + 23 + 24
//a=91 and value of i=24
a=++i + ++i + ++i + ++i;
printf("A=%d\n",a);
printf("I=%d\n",i);


//a=30++ + 31++ + 32++ + 33++
//a=30 + 31++ + 32++ + 33++
//a=30 + 31 + 32++ + 33++
//a=30 + 31 + 32 + 33++ 
//a=126 and value of j=34

a=j++ + j++ + j++ + j++;
printf("A=%d\n",a);
printf("J=%d\n",j);
}
