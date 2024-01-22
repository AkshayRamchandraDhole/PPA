#include<stdio.h>
#include<string.h>
void main(){
char src[50]="Akshay";
char *desc="Dhole";
puts(src);
puts(desc);
strcat(src,desc);
puts("After Concat:");
puts(src);
}
