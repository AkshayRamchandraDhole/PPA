/*  2) By using getchar():-
 *  				1) The getchar() is used to read a character from the terminal i.e keyboard.
 *  				 
 *  				 		int getchar(void);
 *  				2) The getchar() reads the character from keyboard and return the ASCII of the read character.
 *  				3) Since a string is a sequence of character the getchar() can be called repeatedly to read a string.
 *
 * */
#include<stdio.h>
void main(){
char ch;
     
 char line[100];
int loc=0;
printf("Enter line:\n");
while((ch=getchar())!='\n'){
	line[loc]=ch;
	loc++;}

line[loc]='\0';
printf("Line:\n%s\n",line);
}
