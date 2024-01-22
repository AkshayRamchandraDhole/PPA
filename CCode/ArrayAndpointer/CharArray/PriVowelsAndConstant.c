#include<stdio.h>
void main(){
int n;
char ch[n];
printf("Enter Length of Array:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{	scanf("%c",&ch[i]);}
//for(int i=0;i<=n;i++)
//{printf("%c\n",ch[i]);}
printf("Vowels Is:");
for(int k=0;k<=n;k++){
	        if(ch[k]=='A' || ch[k]=='a' || ch[k]=='E' || ch[k]=='e' || ch[k]=='I' || ch[k]=='i' || ch[k]=='O' || ch[k]=='o' || ch[k]=='U' || ch[k]=='u')

		{printf("%c",ch[k]);}
		
//		else{printf("%c",ch[k]);}
}
}
