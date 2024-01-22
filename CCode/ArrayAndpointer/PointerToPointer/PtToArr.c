#include<stdio.h>
void main(){
int arr[4]={10,20,30,40};
int *ptr=arr;
//int *p=&arr;

for(int i=0;i<4;i++)
printf("PTR=%d\t Addr=%p\n",(*(ptr+i)),ptr+i);

//printf("P=%d\t Addr=%p\n",(*(p+i)),p+i);



printf("Size=%ld\n",sizeof(arr));
}
