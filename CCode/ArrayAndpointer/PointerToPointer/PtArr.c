#include<stdio.h>
void main(){
int arr[3]={1,2,3};
int (*ptr)[3]={10,20,30};
printf("Val=%d\n",*ptr);
for(int i=0;i<3;i++)
	printf("Addr=%p\n",(ptr+i));
printf("SizeOfPtr=%ld \t SizeofArr=%ld\n",sizeof(ptr),sizeof(*ptr));
}
