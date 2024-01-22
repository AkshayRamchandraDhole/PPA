#include<stdio.h>
void main(){
int a,b,c,i=45,j=22;
a=i+j;//i=45 + j=22
printf("A=%d\t",a);//A=67

//i=45 + j=22

b=i++ + j++;// i=46 and j=23
printf("B=%d\t",b);//b=67

//i=47 and j=23 
c=++i + j++;//c=70
printf("C=%d\t",c);

}
