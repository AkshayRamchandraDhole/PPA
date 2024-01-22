#include<stdio.h>
char *mystrrev(char *s);
void main(){
char s1[10];
puts("Enter String:");
fgets(s1,10,stdin);
mystrrev(s1);
puts(s1);
}
char *mystrrev(char *s1){
	while(*s1!='\0'){
		s1++;
	}
	s1--;
	char *tmp=s1;
	char a;
	while(tmp < s1){
	
		a=*tmp;
		*tmp=*s1;
		*s1=a;
		s1--;
		tmp++;

	}

}
