#include<stdio.h>
#include<string.h>
void main(){
char s1[50],s2[50];
puts("Enter String1:");
fgets(s1,20,stdin);
puts("Enter String2:");
fgets(s2,20,stdin);
int res=strcmp(s1,s2);
printf("%d\n",res);
if(res==0)
	printf("Equal");
else
	printf("Not equal");
}
