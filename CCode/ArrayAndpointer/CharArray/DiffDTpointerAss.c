#include<stdio.h>
void main(){
char carr[6]={'A','K','S','H','A','Y'};
int *icarr;
char *char;

//Using Character Pointer

printf("%p\n",charr);//print Address
printf("%c\n",*charr);//print 1 After using integer pointer it print A  and if here we use %p tehn it print offset



charr++;

printf("%p\n",charr);//print next Address
printf("%c\n",*charr);//print Anything but after using integer pointer it print W


//Using Integer Pointer

printf("%p\n",icarr);//print address increment by 1 because we use character here
printf("%c\n",*icarr);//print 1

icarr++;

printf("%p\n",icarr);//print address increament by 4 because we use integer here
printf("%c\n",*icarr);//Print Anything
/*

charr++;

printf("%p\n",charr);//print address
printf("%c\n",*charr);//print A

icarr++;

printf("%p\n",icarr);//print address
printf("%c\n",*icarr);//print Anything

*/







}
