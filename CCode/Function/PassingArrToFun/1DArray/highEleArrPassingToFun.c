#include<stdio.h>
int high(int*);
void main(){
int a[3]={10,11,2};
int l;
int a1[3];
for(int i=0;i<3;i++)
	l=high(a);
printf("High=%d\n",l);
}
int high(int *p){

	int min=*p;
	for(int i=0;i<3;i++){
		if(*p>min)
			min=*p;
	}
	return min;
}

