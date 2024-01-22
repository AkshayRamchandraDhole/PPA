#include<stdio.h>
void main(){
char carr[6]={'A','K','S','H','A','Y'};
int *icarr=&carr;
char *charr=&carr;

//Using Character Pointer

printf("%p\n",charr);//print Address 
printf("%c\n",*charr);//print A  and if here we use %p then it print offset



charr++;

printf("%p\n",charr);//print next Address which is increment by 1 beacuse we use here char(1 byte)
printf("%c\n",*charr);//print K 


//Using Integer Pointer

printf("%p\n",icarr);//print address 
printf("%c\n",*icarr);//print A

icarr++;

printf("%p\n",icarr);//print address increament by 4 because we use integer here
printf("%c\n",*icarr);//Print A


charr++;

printf("%p\n",charr);//print address
printf("%c\n",*charr);//print S

icarr++;

printf("%p\n",icarr);//print address
printf("%c\n",*icarr);//print (









}

