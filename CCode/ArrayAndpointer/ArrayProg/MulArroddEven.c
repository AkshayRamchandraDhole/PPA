#include<stdio.h>
void main(){
int a[4]={10,20,30,40};
int mul=1,mu=1;
for(int i=0;i<4;i++){
	if(i%2==0){
		printf("%d\t%d\n",a[i],i);
		mul*=a[i];
		printf("MulEven=%d\n",mul);
		}
	else{
		printf("%d\t%d\n",a[i],i);
		mu*=a[i];
		printf("MulODD=%d\n",mu);
	}
}

}
