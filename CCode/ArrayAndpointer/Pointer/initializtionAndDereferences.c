#include<stdio.h>
void main(){
  	// Normal Variable
int a=10;
float b=18.0f;
double c=22.0;
char ch='S';//printf("%ld",sizeof(c));
long d=45l;

	//Pointer Declaration
int *iptr=&a;//initialization only store address of variable
float *fptr=&b;
double *dptr=&c;
char *cptr=&ch;
long *lptr=&d;


//Printing Value Store in Variable

printf("A=%d\n",a);//if here we use %c then it show warning and print nothing  AND %f then with warning print 0.0000
printf("B=%f\n",b);//if here we use %d then it print garbage value first warning is come not a error same for double
printf("C=%f\n",c);
printf("CH=%c\n",ch);//if here we use %d then it print the Decimal digit of that character i.e for S=83
printf("D=%ld\n",d);//if here we use %d then it show warining not error and then it show value

printf("\n");

//Deference Concept 
//If here we use %d or %c or %f then it follows same concept as above explain

printf("IPTR=%d\n",*iptr);//If here we use iptr then it print garbage value

printf("FPTR=%f\n",*fptr);
printf("DPTR=%f\n",*dptr);
printf("CPTR=%c\n",*cptr);
printf("LPTR=%ld\n",*lptr);

//Address of Each Variable in hexdecimal form
printf("\n");

printf("Iptr=%p\n",iptr);//if here we use *iptr to print the addresss then it print offset  
printf("Fptr=%p\n",fptr);//print whole address in hexadecimal
printf("Dptr=%p\n",dptr);//print whole address in hexadecimal
printf("Chptr=%p\n",cptr);//print offset 
printf("Lptr=%p\n",lptr);//print offset







}

