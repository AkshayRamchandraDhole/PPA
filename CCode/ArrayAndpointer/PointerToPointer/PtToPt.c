#include<stdio.h>

						/* int i=10;
						 *		i=[  10  ]
						 *	Adress    100  104
						 *
						 * int *p1=&i;     p1=[ 100 ]
						 * 	Address       200  207
						 *
						 * int **p2=&p1;    p2=[ 200 ]
						 * 	Address        300   307
						 *
						 * int ***p3=&p2;   p3=[  300  ]  
						 * 	Address        400    407  
						 *
						 * */
void main(){
int i=10;
int *p1=&i;
int **p2=&p1;
int ***p3=&p2;

printf("I=%d\tAddr=%p\n",i,&i);
printf("P1=%d\tAddr=%p\n",*p1,p1);
printf("P2=%d\tAddre=%p\n",**p2,p2);
printf("P3=%d\tAddr=%p\n",***p3,p3);


}
