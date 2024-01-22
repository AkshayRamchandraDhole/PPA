#include<stdio.h>
char *mystrcpy(char *desc,const char *src);
void main(){
char src[50]="Gaurav";
char desc[50];
puts("DESC:\n");
mystrcpy(desc,src);
puts(desc);
}

char *mystrcpy(char *desc,const char *src){
//	while(*src!='\0')
//		src++;
	while(*src!='\0'){
//	printf();
	*desc=*src;
	src++;
	desc++;
}
*desc='\0';
return desc;
}
