#include<stdio.h>
void main(){
int a,b,i=10,j=20,k=5;

//a=++i + i++;
//a=++i + 11++
//a=++11 + 11
//a=12 + 11
//a=23 adnd value of i=12

a=++i + i++;
printf("A=%d\n",a);
printf("I=%d\n",i);

//a=++j + j++
//a=++j + 21++
//a= 22 + 21
//a=43 and value of j=22

b=++j + j++;
printf("B=%d\n",b);
printf("J=%d\n",j);


//a=k++ + ++k
//a=5++ + ++6
//a=5 + 7
//a=12 and value of k=7
a=k++ + ++k;
printf("A=%d\n",a);
printf("K=%d\n",k);

}

