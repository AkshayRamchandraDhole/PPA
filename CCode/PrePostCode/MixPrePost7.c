#include<stdio.h>
void main(){
int i=10,j=20,a,b;

//a=10++ + 10++ + 10++
//a=10 + 11++ + 11++
//a=10 + 11 + 12++
//a=33 and value of i=13
a=i++ + i++ + i++;
printf("A=%d\n",a);
printf("I=%d\n",i);

//a=20++ + 20++ + 20++
//a=20 + 21++ + 21++
//a=20 + 21 + 22++
//a=63 and value of j=23
a=j++ + j++ + j++;
printf("A=%d\n",a);
printf("J=%d\n",j);
}
