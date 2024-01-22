#include<stdio.h>
void main(){
int a,i=45,j=18;
//a=i++ + ++i
//a=45++ + ++46
//a=45 + ++46
//a=45 + 47
//a=92 and value of i=47
a=i++ + ++i;
printf("A=%d\n",a);
printf("I=%d\n",i);

//a=j++ + ++j
//a=18++ + ++19
//a=18 + ++19
//a=18 + 20
//a=38 and value of j=20
a=j++ + ++j;
printf("A=%d\n",a);
printf("J=%d\n",j);


}
