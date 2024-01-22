#include<stdio.h>
void main(){
int a,b,c,i=18,j=10;
a=++i + ++j;//here 1)value of j is increment by 1  2)Then vlaue of i increment by 1  3) finally addition operation is performed

printf("A=%d\t",a);
//value i=19 j=11
b=i++ + j++;//similarly here also 1)value of j i.e 11 is used for addition and then increment by 1
			//        2)value of i i.e 19 is used for addition and then increment by 1
			//        3)at last additon is performed
printf("B=%d\t",b);
c=i+j;//here value j=12 and value of i=20 is used for adddition
printf("c=%d\t",c);
}
