/* 	Character Array:-
 *  			1) We store a string literal constant by creating variable of type character array.
 *  			2) The string variable or character array can be initialized in two different ways:
 *  							
 *  							1) By using string literal constant :
 *  												char arr[6]="Akshay";
 *
 *  							2) By using initialization list:
 *  												char arr[6]={'A','k','s','h','a','y'};
 *
 *
 * 			3) When a character array is initilized with a list of character initilizers the terminating null character(\0) is to be explicitly placed but when it is initialized with a string 			       literal constant the terminating null character is automatically placed.
 * 			4) If the size of character array is one more the length of string literal constant.  
 *
 * */
#include<stdio.h>
void main(){
char ch[6]="akshay";
printf("%s\n",ch);

char ch1[6]={'a','k','s','h','a','y'};
printf("%s\n",ch1);
}
