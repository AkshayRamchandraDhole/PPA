#include<stdio.h>
void main(){
int a[5];
printf("Enter Array element:");
for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
for(int i=0;i<5;i++){
	if(a[i]%2==0)
	printf("Arr=%d\n",a[i]);
}

}
