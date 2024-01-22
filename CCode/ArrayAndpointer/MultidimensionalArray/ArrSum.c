#include<stdio.h>
void main(){
int a[2][2],sum=0;
for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
        }

}
for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        if(i==j){
	sum+=a[i][j];
	}
        }

}

}
