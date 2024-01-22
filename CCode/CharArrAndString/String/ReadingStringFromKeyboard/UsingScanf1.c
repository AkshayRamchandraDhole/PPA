#include<stdio.h>
void main(){
printf("Enter line of text:");
char line[10];
scanf("%[^\n]",line);
printf("Line is:\n%s\n",line);
}
