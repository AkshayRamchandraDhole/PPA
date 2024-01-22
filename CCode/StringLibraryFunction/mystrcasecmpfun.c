#include<stdio.h>
int mystrcase(const char *s1,const char *s2);
void main(){
char s1[20],s2[20];
int res;
puts("Enter String1:");
fgets(s1,20,stdin);
puts("Enter String2:");
fgets(s2,20,stdin);

res=mystrcase(s1,s2);

if(res==0)
	puts("Equal");
else
	puts("Not Equal");
}
int mystrlen(const char *s){
int c=1;
while(*s!='\0'){
	c++;
	s++;
}
return c;
}
int mystrcase(const char *s1,const char *s2){
int s1len=mystrlen(s1);
int s2len=mystrlen(s2);

if(s1len!=s2len)
	return -1;
else{

	while(*s1!='\0'){
	
		if(*s1==*s2 || *s1-*s2==-32 || *s1-*s2==32){
			
			s1++;
			s2++;
		}else{
			return -1;
		}
	}
return 0;
}
}
