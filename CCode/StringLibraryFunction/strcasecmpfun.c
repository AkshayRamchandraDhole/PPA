/*		5) strcasecmp() :-
 *				1) this function compare 2 strings without case sensitivity.
 *				2) Input:- 2 string : str1 and str2
 *				3) Output:- It returns ascii difference of the first dis-similar corresponding charaters or 0 if none of the corresponding character in both the string are different.
 *				4) Prototype:-
 *							int strcasecmp(const char *,const char *) 
 * 
 */
#include<stdio.h>
#include<string.h>
void main(){
char s1[10],s2[10];
int res;
printf("Enter String1:");
scanf("%s",s1);
printf("Enter String2:");
scanf("%s",s2);
res=strcasecmp(s1,s2);
if(res==0)
	printf("Equal");
else
	printf("Not Equal");
}

