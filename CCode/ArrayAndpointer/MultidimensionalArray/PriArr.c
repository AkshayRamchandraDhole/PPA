/*   Multidimensional Array:--
 *   				1) 2D array is an array of 1D array and can be visualized as plain that has rows and columns.Each roW is a single dimensional array.
 *   				2) A 3D array is an array of 2D arrays and can be visualized as a cube that has plain each plain is a 2D array.
 *   				3) A 2D array has its elements arranged in rectanular grid of rows and columns.
 *   				4) The elements of 2D array can be accessed by using a row subscript i.e row number and the column subscript i.e column number.
 *   				5) Both the row no. and column no. are required to select an element of a 2D array.
 *   				6) A 2D array is popularly knows as matrix.
 *   
 *   Declarartion :-  int arr[4][3];    |  |   |   |
 *   					--------------
 *   					|  |   |   |
 *   					--------------
 *   					|  |   |   |
 *   					---------------
 *   					|  |   |   |
 *   					----------------
 *   		      float arr[3][2];
 *   		      char aarr[3][3];
 *
 *
 *   Initialization :-
 *   			1) int arr[2][2]={1,2,3,4};
 *
 *   			2) int arr[2][2]={{1,2},{3,4}};
 *
 *
 */
#include<stdio.h>
void main(){
int arr[2][2]={1,2,3,4};
int i,j;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
}
}
