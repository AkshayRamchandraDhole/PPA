#include<stdio.h>
void main(){
int a[3]={10,20,30};//  a[3]=[ (  10  ) ,(  20  ) ,(  30  ) ] 
		   //Address=  100      104        108

int b[3]={40,50,60};//  b[3]=[ (  40  ),(  50  ),(  60  ) ]
		    //Address= 200      204      208

int c[3]={70,80,90};//  c[3]=[ (  70  ),(  80  ),(  90  ) ]
		   //Address=  300     304      308

int *arr={a,b,c};//  arr=[100  ,  200  , 300 ]

//printf("%d\t%d\t%d\t",arr+0,arr+1,arr+2);//print garbage value

//printf("%d\t%d\t%d\n",*(arr+0),*(arr+1),*(arr+2));// print 10 20 30

//printf("%d\t%d\t%d\t",*(*(arr+0)),*(*(arr+1)),*(*(arr+2)));// error invalid type of argument unary *
//printf("%p\t%p\t%p\n",&arr[0],&arr[1],&arr[2]);//print address

//printf("%p\t%p\t%p\n",arr[0],arr[1],arr[2]);//print offset address

//printf("%d\t%d\t%d\n",arr[0],arr[1],arr[2]);//print 10,20,30

//printf("%p\t%p\t%p\n",a,b,c);//print starting addresses 

//printf("%d\t%d\t%d\n",a,b,c);//print garbage value

//printf("%p\t%p\t%p\n",&a,&b,&c);//print starting addresses
 
//printf("%d\t%d\t%d\n",&a,&b,&c);//garbage value

}
