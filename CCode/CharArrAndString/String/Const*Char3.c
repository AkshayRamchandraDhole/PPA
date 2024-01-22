#include<stdio.h>
void main(){
char *p="akshay";
printf("%c\n",*p);

*p='b';

printf("%c\n",*p);//print a and then segentation fault(core dumped)
printf("%s\n",p);
}
