//  1) Call By Value:

#include<stdio.h>
void fun(int a);
int mul=1;
void main(){
int a[2][2],i,j;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	scanf("%d",&a[i][j]);
	}

}

for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        fun(a[i][j]);
        }

}

printf("Mul=%d\n",mul);
}

void fun(int a){
mul=mul*a;
}
