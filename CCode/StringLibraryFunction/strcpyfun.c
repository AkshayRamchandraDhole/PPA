#include<stdio.h>
#include<string.h>
void main(){
char src[10]="Akshay";
char desc[10];
const char *p="Gaurav";
const char *p1;

puts("Source String:");
puts(src);
strcpy(desc,p);
puts("Destination string:");
puts(desc);
puts(p);
}
