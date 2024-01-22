#include<stdio.h>
char *mystrlwr(char*);
void main(){
char s1[10];
puts("Enter String:");
fgets(s1,20,stdin);

mystrlwr(s1);
puts(s1);
}

char *mystrlwr(char *str1){
	while(*str1!='\0'){
	
		if(65<=*str1<=90){
			return *str1+32;
		}
		
	}
	return str1;
}
