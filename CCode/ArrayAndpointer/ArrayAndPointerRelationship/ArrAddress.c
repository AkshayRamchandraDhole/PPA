//   Array internally pointer mhnun store hotat

// How the Address of array pointer manange or increment ?

//Example :- int a[3]={10,20,30};
//	   Address =   100,104,108

//   arr=staring address of array=100

//arr[0] = *(arr + 0) = *(100 + 0 * Size of Datatype(i.e for int=4)) = *100 =1

//arr[1] = *(arr + 1) = *(100 + 1 * size of datatype(i.e 4)) = *104 = 2


//arr[2] = *(arr + 2) = *(100 + 2 * 4) = *108 = 3



#include<stdio.h>
void main(){
int a[5]={10,20,30,40,50};
for(int i=0;i<5;i++)
	//printf("%d\t%p\n",a[i]);//if we use this statement then it print address of first element and for other print (Nil)


	printf("%d\t%p\n",a[i],&a[i]);//for value and address we need to use this statement



//	printf("%d\t%p\n",a[i],a[i]);// if we use this statement then it print value and offset address



}
