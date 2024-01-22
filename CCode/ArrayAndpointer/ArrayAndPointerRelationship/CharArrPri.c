#include<stdio.h>
void main(){
char ch[5]={};
for(int i=0;i<5;i++)
	printf("%p\n",ch[i]);//if here we use 1) %d and ch[i] then it print 5 times 0
				//		2) %p and ch[i] then it print 5 times (nil)
				//		3) 5p and &ch[i] then it print adress 5 time 

}
