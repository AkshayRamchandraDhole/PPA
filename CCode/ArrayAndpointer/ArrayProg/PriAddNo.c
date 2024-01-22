//To Print the Address use '%p'

#include<stdio.h>
void main(){
int i,j,k;
int a[3];
printf("I=%p\tJ=%p\tK=%p\n",&i,&j,&k);//Print Actual Address of Variable in Hexadecimal form
//printf("%d\t%d\t%d\n",i,j,k);//Print Garbage Value 
//printf("%d\t%d\t%d\n",&i,&j,&k);//show the warining but print number

int a1,b;

printf("Enter Two Number:");
scanf("%d",&a1);
scanf("%d",&b);
printf("A=%p\nB=%p\n",&a,&b);
printf("%p\n",&a[0]);
printf("%p\n",&a[1]);
printf("%p\n",&a[2]);

}
