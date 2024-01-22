#include<stdio.h>
#include<string.h>
char *mystrcmp(const char *s1,const char *s2);
void main(){
char s1[50],s2[50];
puts("Enter String1:");
fgets(s1,20,stdin);
puts("Enter String2;");
fgets(s2,20,stdin);
int res=mystrcmp(s1,s2);
if(res==0)
	puts("Equal");
else if(res==-1)
	puts("length not match");
else
	puts("Not equal");
}
int mystrlen(const char *s){
int c=0;
while(*s!='\0'){
	c++;
	s++;}
return c;
}
char *mystrcmp(const char *s1,const char *s2){
int strlen1=mystrlen(s1);
int strlen2=mystrlen(s2);

if(strlen1!=strlen2){
	return -1;
}else{

	while(*s1!='\0' || *s2!='\0'){
	
		if(*s1!=*s2){
		
			return *s1 - *s2;
		}else{
		
			s1++;
			s2++;
		}
	}

return 0;
}
}
