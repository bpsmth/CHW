/* Braden Smith
   10/27/2010
   array2.c
   
*/

#include<stdio.h>
#define ROWSIZE 3
#define COLSIZE 4

void printarray(int array[ROWSIZE][COLSIZE], int rows,int cols);


int main(void)
	{
	
	int array[ROWSIZE][COLSIZE]={1,2,3,4,5,6,7,8,9,10,11,12};
	//part1
	printarray(array,ROWSIZE,COLSIZE);
	 


	
	
	}

void printarray(int array[ROWSIZE][COLSIZE],int rows, int cols)
	{
	int row,col;
	
	 for (row = 0; row < rows; row++)
   		{
		      
		      for (col = 0; col < cols; col++)
		      {
			//array[ROWSIZE][COLSIZE] = (row+1)*(col+1);
			  printf("%2d  ", array[row][col]);
		      }
		      printf("\n");
   }
	printf("Part 2 \n");
	
	for (row = 0; row < rows; row++)
   		{
		      
		      for (col = 0; col < cols; col++)
		      {
			//array[ROWSIZE][COLSIZE] = (row+1)*(col+1);
			  printf("%2d  ", array[row][3-col]);
		      }
		      printf("\n");
   }

printf("Part 3 \n");
	
	for (row = 0; row < rows; row++)
   		{
		      
		      for (col = 0; col < cols; col++)
		      {
			//array[ROWSIZE][COLSIZE] = (row+1)*(col+1);
			  printf("%2d  ", array[2-row][3-col]);
		      }
		      printf("\n");
   }




	}


