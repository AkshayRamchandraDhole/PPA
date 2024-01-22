#include<stdio.h>

//Why Pointer of one type should store address of that type element only?
//Answer:- while increment the pointer we need the size of datatype of that pointer
//         For example here we use int(4 Bytes) 


// if iarr=10, 20, 30, 40, 50
//Address  100,103,107,111,115
//if int *ptr=&iarr
//then ptr point to =100

//How pointer increment 

//ptr++=ptr+1*size of datatype of pointer
//     =100+1*4(int datatype of pointer)
//     =104(now pointer point to 104 location)

void main(){
int iarr[5]={10,20,30,40,50};
for(int i=0;i<5;i++){
printf("%p\n",&iarr[i]);
}
printf("ARR=%p\n",iarr);
}
