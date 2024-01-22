#include<stdio.h>
void main(){
int ch=5;
switch(ch){
//case ++ch://Error case label does not reduce to an integer constant

case 4:
	printf("One\n");
case 8:
	printf("Two\n");
case 6:
	printf("Three\n");
}

}
