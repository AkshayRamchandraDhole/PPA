#include<stdio.h>
void printsum();//if not write warining:-implicit declaration of printsum
//					  confliciting type of declaration 	
void main(){
printsum();
//printf(printsum());  //showing op but segmentation fault core dumped
}
//void printsum();// it allows declaration but with warning:- same as above mention								
void printsum(){
printf("This is void function\n");
printf("This is a statement b4 return statement\n");

//return;
printf("This is statement after return statement\n");
//return;
printf("Unreactable code\n");
//return;
}

