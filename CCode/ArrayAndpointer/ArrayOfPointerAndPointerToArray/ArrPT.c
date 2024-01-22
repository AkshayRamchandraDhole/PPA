// Array:--
// 		int a[3];
// 		arr[ 0  ,  0  ,  0  ];
// 	    address[100 , 104 , 108 ]
//	             |
//		     |		*
//                    ---------------               
//  Pointer:--                      |
//  		int *ip=arr;  ip=[ 100 ]
//    		Address		200    207


//   int *arr[3];

//   arr is array of 5 integer pointer 		

#include<stdio.h>
void main(){
int a=10,b=20,c=30;
//int *ip1,*ip2,*ip3;

int *ip1=&a;
int *ip2=&b;
int *ip3=&c;
			//a=[ 10 ]     b=[ 20 ]   c=[ 30 ]
		         //100   104    200  204   300  304


int *arr[3]={&a,&b,&c};  //   arr={100,200,300}

//int *arr[3]={ip1,ip2,ip3};// 	1) if we this and 1st statement of print it print garbage value
//				2) if we this and 2nd statement of print it print address  
				//3) if we this and last statement of print it print value 


//printf("%ld\n",sizeof(arr));//it print 24 beacuse we provid address of variable means indirect we provide pointer and sizeof pointer is 8 

for(int i=0;i<3;i++)
//	printf("%d\n",arr[i]);// if we this statement it print garbage value
	 printf("%p\n",arr[i]);// if we use this statement it print address 
//	 printf("%d\n",*arr[i]);// it print value

}
