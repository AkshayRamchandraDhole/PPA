#include<stdio.h>
int sum_array(int*,int);
void main(){
	int arr[3],sum=0;
	for(int i=0;i<3;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<3;i++)
		sum=sum_array(&arr[i],sum);
	printf("Sum=%d\n",sum);
}
int sum_array(int *p,int sum){
	return (sum+(*p));
}
