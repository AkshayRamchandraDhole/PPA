#include<stdio.h>
void main(){
int a[5]={{1,2,3,4,5},11,21,31,41};
//int a[5]={{1,2,3,4,5}};//if we use this then it shows and print 1,0,0,0,0

for(int i=0;i<5;i++)
	printf("%d\n",a[i]);//With Warning it print 1,11,21,31,41
				// The comma is used as separator therfore only 1 is printed
}
