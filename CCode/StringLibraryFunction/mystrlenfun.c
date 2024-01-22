#include<stdio.h>
long mystrlen(const char *);
void main(){
char  *p="Akshay";
char ch[10]="Gaurav";
printf("Length of Hello:%ld\n",mystrlen("Hello"));
printf("Length of Akshay:%ld\n",mystrlen(p));
printf("Length of Gaurav:%ld\n",mystrlen(ch));

}

long mystrlen(const char *ptr){
long count=0;
while(*ptr!='\0'){
	count++;
	ptr++;
}
return count;
}
