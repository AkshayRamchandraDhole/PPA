#include<stdio.h>
char *mystrupr(char*);
void main(){
char s1[10];
puts("Enter String:");
fgets(s1,20,stdin);

mystrupr(s1);
puts(s1);
}

char *mystrupr(char *str1){
        while(*str1!='\0'){

                if(97<= *str1 <=122){
                        return *str1-32;
                }
		str1++;

        }
        return str1;
}

