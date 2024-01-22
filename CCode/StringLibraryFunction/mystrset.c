#include<stdio.h>
char *mystrset(char*,char);
void main(){
char s1[10];
char ch;
puts("Enter String:");
fgets(s1,20,stdin);

puts("Enter Character:");
scanf("%c",&ch);

puts("Before replacment:");
puts(s1);
mystrset(s1,ch);

puts("After replacement:");
puts(s1);
}

char *mystrset(char *str1,char ch){
        while(*str1!='\0'){

               *str1=ch;
	       str1++;

        }
        return str1;
}

