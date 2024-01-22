#include<stdio.h>
void main(){
int a=10,b=20;
if((a++ || ++b) && (++a && ++b))
	printf("Hello\n");
printf("A=%d\n",a);
printf("B=%d\n",b);

if((a++ || ++b) || (++a && ++b))
	printf("Hiiiii\n");
printf("A=%d\n",a);
printf("B=%d\n",b);

}
