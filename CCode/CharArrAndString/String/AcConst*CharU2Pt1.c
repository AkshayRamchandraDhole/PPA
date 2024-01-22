#include<stdio.h>
void main(){
const char *p="AKshay";
const char *c;

c=p;
	printf("%s\n",c);

printf("%c\n",*c);
*c++;
printf("%c\n",*c);
*c++;
printf("%c\n",*c);
*c++;
printf("%c\n",*c);
*c++;
printf("%c\n",*c);
*c++;
printf("%c\n",*c);
//*c='b';//read only location 
printf("%s\n",c);

}
