#include<stdio.h>
//By Default All Function is Extern Asatat
extern void add(){
printf("%d",10+20);
}
void add();
void main(){
add();
}

