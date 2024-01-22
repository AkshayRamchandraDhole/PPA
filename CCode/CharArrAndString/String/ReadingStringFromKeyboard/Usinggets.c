/*		3) By using gets():
 *				   1) The protype of gets() is:
 *
 *					char* gets(char*);
 *				    2) The gets() accept a character array or character pointer as an argument.
 *				    3) It reads a character from keyboard until a newline character (\n) is encountered.
 *				    4) It stores them in a character array or in the memory location pointed by the character pointer.
 *				    5) It appends a null character to the string and returns the staring address of the location where the string is stored.
 *
 * */

#include<stdio.h>
void main(){
char p[10];
printf("Enter language:");
gets(*p);
printf("%s",p);
}
