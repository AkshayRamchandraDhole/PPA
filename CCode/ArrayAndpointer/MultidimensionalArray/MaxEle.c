#include<stdio.h>
void main(){
int a[2][2],max=0,i,j;
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
        }

}

for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        if(max<a[i][j]){
	max=a[i][j];
	}
        }

}

printf("%d\n",max);
printf("Found at index:row=%d and col=%d",i,j);


}

