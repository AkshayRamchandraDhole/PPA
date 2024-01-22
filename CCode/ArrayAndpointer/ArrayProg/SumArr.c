#include<stdio.h>
void main(){
int arr[3],su=0;
printf("Enter Array Elements");
for(int i=0;i<3;i++){
scanf("%d",&arr[i]);
su+=arr[i];
printf("Sum=%d\n",su);
printf("Array Element is:%d\n",arr[i]);
}

}
