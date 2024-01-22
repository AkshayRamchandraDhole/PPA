
// 1) A function return only one value


#include<stdio.h>
int sum_diif(int,int);
void main(){
int a=100,b=20;

printf("Sum=%d\n",sum_diif(a,b));
printf("DIFF=%d\n",sum_diif(a,b));

}
int sum_diif(int x,int y){
int sum,diff;
sum=x+y;
diff=x-y;
return (sum,diff);// it return last value i.e value of diff i.e 80
}
