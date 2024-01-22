// 2) Call by Address

#include<stdio.h>
int mul=1;
void main(){
int a[2][2],i,j,r=2,w=2;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	scanf("%d",&a[i][j]);
	}
}
fun(a,r,w);
printf("Mul=%d",mul);

}

void fun(int **ptr,int r,int w){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			mul=mul * (*ptr)++;
		}
	}

}
