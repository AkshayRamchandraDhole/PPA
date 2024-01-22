/*
 * 1) Character Array And String:
 *					1) The Character literal constant or just string literal is a sequnence of 0 or more character enclosed within double quotes(" ")
 *					
 *					2) Example:-"Akshay","Gaurav","Kavi","Navi"
 *				
 *					3) Every string literal constant is automatically terminated by null character i.e('/0')
 *					
 *					4) The no. of bytes required to store a string literal constant is onr more than the no. of characters present in it.
 *
 *					5) The additional one byte required for storing terminating null character.
 * 
 *
 * 
 */ 
#include<stdio.h>
#include<string.h>
void main(){
printf("Memory required of \"xyz\" is %ld bytes \n",sizeof("xyz"));//4 Bytes
printf("Length of string:%ld",strlen("xyz"));// 3
}


/* 	Explaination:-
 *  	
 *		1) The length of string is defined as the no. of character present in it.
 *		2) A string literal constant of 0 length is known as empty string.
 *		3) The empty string is written as "" i.e no character enclosed within double quotes.
 *		4) Though empty string is of 0 length it still takes 1 yte in the menory for the storage of null character.
 *	
 */
