#include<stdio.h>        //

void main(){		//index=[  0  ,  1    ,    2     ]


int arr[3]={10,20,30};//    arr={ 10  ,   20   ,   30  } ;
	
      		      //Address=[ 100 , 104 , 108 ]
		      //           | |
		      //       ----| |-------
		      //    *  |	  *  |
		      //       |             |
		      //ip1=[ 100 ]   ip2=[ 100 ]

	      	      // increment of pointer 
		      // 	ip1++=ip1 + 1 * sizeof datattype i.e (int so 4)
		      // 	     =96+1 * 4
		      // 	     =100
		      
	
		      
		      //   ip2++=ip2+1*sizeof whole array
		      //        =100+1*12
		      //        =112

int *ip1=arr; // address of 1st element
int *ip2=&arr; // Base address

printf("Ip0=%p\n",ip1);// print the address 96

//printf("Ip1=%p\n",ip1+1);// print the address squentially i.e 100
//printf("Ip2=%p\n",ip1+2);// similarily 104

//printf("\n");



printf("Ip1=%p\n",ip2);//print the addres same as prreviously mention 96
printf("Ip0=%d\n",*ip1);//print 10
printf("Ip1=%d\n",*ip2);//print 10



ip1++;
ip2++;

printf("\n");

printf("Ip0=%p\n",ip1);// print next address 100
printf("Ip1=%p\n",ip2);// print next address  100
printf("Ip0=%d\n",*ip1);//print 20
printf("Ip1=%d\n",*ip2);// print 20



ip1++;
ip2++;

printf("\n");

printf("Ip0=%p\n",ip1);//print next adderess 104
printf("Ip1=%p\n",ip2);// print next address 104
printf("Ip0=%d\n",*ip1);//print 30
printf("Ip1=%d\n",*ip2);//print 30


//printf("&Arr=%p\n",ip2+1);// Address 100
//printf("&Arr=%p\n",ip2+2);// Address  104




}


