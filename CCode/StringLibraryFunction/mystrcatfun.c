#include<stdio.h>
#include<string.h>
char *mystrcat(char *src,const char *desc);
void main(){
char src[50]="Akshay";
char *desc="Dhole";
puts(src);
puts(desc);
mystrcat(src,desc);
puts("After:");
puts(src);
}
char *mystrcat(char *src,const char *desc){
	while(*src!='\0')
		src++;
	while(*desc!='\0'){
	*src=*desc;
	src++;
	desc++;
	}
	*src='\0';
	return src;
}

