#include<stdio.h>
int d=50,x=60,v;//Gobal Variable Intialize Variable Go into Non-bss and UnInitilized Go into bss on Data Section
void fun(){
int c=50,e=60;//Local Variable
printf("%d",c);
printf("%d",e);
}
void gun(){
int f=90,u=70;
printf("%d",f);
printf("%d",u);
}


void main(){
int a=10,b=20;//Local Variable
printf("%d",a);
printf("%d",b);
fun();
}
//It gives Warning if we declare function after main() but show output
//Warning is:1:-Implicit Declaration Of Fun
//	     2:-Confilting Type for Fun
//	     3:-Previous declaration for Fun 
/*void fun(){
int c=50,e=60;//Local Variable
printf("%d",c);
printf("%d",e);
gun();
}
void gun(){
int f=90,u=70;
printf("%d",f);
printf("%d",u);
}*/
