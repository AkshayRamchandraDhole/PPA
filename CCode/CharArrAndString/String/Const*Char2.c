#include<stdio.h>
void main(){
const char *p="Akshay";
printf("%c\n",*p);

*p='B';//error read only location

printf("%c\n",*p);// Read only location error
}
