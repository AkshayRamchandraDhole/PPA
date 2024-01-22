#include<stdio.h>
void main(){
int a,i=10,j=20;

// a= i++ + j++
// a= 10++(pending) + 11++(pending)
// a= 10 + 11++(still pending)
// a=21 and value of i=12 and the value of i increment one time on one line or 2 pending operation eka line vr nhi rahu shakat

a=i++ + i++;
printf("A=%d\n",a);
printf("I=%d\n",i);


//a=j++ + j++
//a=20++ + 21++
//a=20 + 21++
//a=21 and value of j=22

a=j++ + j++;

printf("A=%d\n",a);
printf("J=%d\n",j);
}
