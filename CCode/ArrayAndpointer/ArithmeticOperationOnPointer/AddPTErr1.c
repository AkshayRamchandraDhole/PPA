#include<stdio.h>
void main(){
int a=10;
int *ip=&a;
char ch='B';
char *cp=&ch;

printf("IPT=%d\n",*ip);

ip=ip+1;//after increment this print garbage value

//(*ip)++;//This is proper increment of any pointer

printf("IPTR=%d\n",*ip);//Garbage Value

printf("CPTR=%c\n",*cp);//if we use cp to print the it show warning and print something

cp=cp+ch;//print something

//cp=cp+1;//if we use then print something

//(*cp)++;//This is proper increment of any pointer


printf("CP=%d\n",*cp);//Garbage Value

}
