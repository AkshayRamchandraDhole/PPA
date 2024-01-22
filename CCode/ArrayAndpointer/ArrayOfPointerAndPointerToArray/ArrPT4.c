#include<stdio.h>
void main(){
int arr[3]={1,2,3};

for(int i=0;i<3;i++)
	printf("Arr=%p\n",arr[i]);
for(int j=0;j<3;j++){
	printf("ARRJ=%d\t",*(arr+j));
	if(arr[j]%2==0){
	printf("\n ARRIF=%d\n",*(arr+j));
	}

}

}
