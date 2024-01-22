#include<stdio.h>
void main(){
int n;
char c[n];
printf("Enter Length of Array");
scanf("%d",&n);

for(int i=0;i<n;i++)
	scanf("%s",&c[i]);//if here we use %s then it allow
for(int j=0;j<n;j++)
	printf("%c",c[j]);//if here we use %s then segmentation fault occurred
}
