

// 3) Function with ip and one op:
//					Function default return type is int

// return statement:
// 			return expression;
// 			1) If the return type of a function and the type of the result of evaluation is not the same the result of evaluation of the return expression is implicitly type cased to return
// 			   type of the function if they are compatible.
// 			2) If they are incompatible there will be a compilation error.
#include<stdio.h>
circle_area(int);
void main(){
int rad;
float area;
printf("Enter radius of circle\n");
scanf("%d",&rad);

area=circle_area(rad);
printf("Area is:%f\n",area);
}
circle_area(int rad){
return 3.14*rad*rad;
}
