#include<stdio.h>
void main(){
char ch1='a',ch2='b',ch3='c';
char *cp1=&ch1;
char *cp2=&ch2;
char *cp3=&ch3;

// For All warinig is  exaccess element in scaler initialzer



//	1] Scnario

//char* arrch={cp1,cp2,cp3};// 1) if we use this and 1st print statement it print 3 times a
			//   2) if we use this statement and 2nd print it print 3 times 97
//for(int i=0;i<3;i++)
//	print("%c\n",arrch);// print a a a

//	printf("%d\n",*arrch);// print 97,97,97

	//printf("%c\n",arrch[i]);//print a,b,c
	
	//printf("%d\n",*arrch[i]);//print a,b,c
	
	//printf("%p\n",arrch[i]);// print offset address
	
	//printf("%d\n",arrch[i]);//print 97,98,99
	
	//printf("%p\n",arrch);//print starring address of array 3 times
	


//   2] Scenario



char *arrch={&ch1,&ch2,&ch3};  // ch1= [  a  ]    ch2= [ b ]   ch= [ c ]
			     //Address=100 101       200  201     300 301
			     //arrch={100,           200         ,300  }
                        
for(int i=0;i<3;i++)
       // printf("%c\n",arrch);// print something which is not readable

       //printf("%d\n",*arrch);// print 97,97,97

       //printf("%c\n",arrch[i]);//print a,b,c

       //  printf("%c\n",*arrch[i]);//  error  INVALID TYPE OF ARUGEMENT
 
       // printf("%p\n",arrch[i]);// print offset address
 
       // printf("%d\n",arrch[i]);//print 97,98,99
 
       // printf("%p\n",arrch);//print starring address of array 3 times


}
