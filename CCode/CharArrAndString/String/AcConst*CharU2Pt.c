#include<stdio.h>
void main(){
const char *p="akshay";
const char *c;
printf("%c\n",*p);
*p++;
printf("%c\n",*p);
c=p;
printf("%c\n",*c);
*c++;
printf("%c\n",*c);

}
