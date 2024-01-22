#include<stdio.h>
#include<string.h>
char *mystrncpy(char *s1,char *s2,int);
void main(){
char s1[10];
char s2[10];
int n;
puts("Enter String:");
fgets(s1,20,stdin);
printf("Enter Number:");
scanf("%d",&n);

mystrncpy(s1,s2,n);
*(s2+n)='\0';
puts(s2);
}

char *mystrncpy(char *desc,char *src,int n){

	while(n>0){
		*desc=*src;
		desc++;
		src++;
		n--;
	
	}
	*desc='\0';
	return desc;
}
