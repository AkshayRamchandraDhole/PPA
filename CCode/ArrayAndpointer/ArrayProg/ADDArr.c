#include<stdio.h>
void main(){
int a[3];
int su=0,mul=1;
printf("Enter 3 Array Element:");
for(int i=0;i<3;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<3;i++){
	su+=a[i];
	
	printf("%d\t",su);}
printf("\n");
for(int i=0;i<3;i++){
	mul*=a[i];
	printf("%d\t",mul);
}
}
