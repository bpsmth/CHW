/* Braden Smith
   11/1/2010
   pointer.c
   
*/

#include<stdio.h>
#define SIZE 7
void findminmax(int array[SIZE], int *min,int *max);
void findminmax2(int array[SIZE], int *min,int *max);

int main(void)
	{
	
	int array[SIZE]={8,9,4,2,11,13,23},min=array[0],max=array[0];
	findminmax(array,&min,&max);
	printf("\n Max: %d",max);
	printf("\n Min: %d \n",min);
	printf("Part 2: \n Please input a min value: \n");
	scanf("%d",&min);
	printf("\n Please enter a max value: \n");
	scanf("%d",&max);
	findminmax2(array,&min,&max);
	printf("\n Max: %d",max);
	printf("\n Min: %d \n",min);
	
	}

void findminmax(int array[SIZE],int *min, int *max)
	{
	
	int i;
		 for (i = 0; i < SIZE; i++)
		      {
			if(array[i]>*max)
				{
				*max=array[i];
				} 
			if(array[i]<*min)
				{
				*min=array[i];
				}
		      }
		
	
		
		     
   }
void findminmax2(int array[SIZE],int *min, int *max)
	{
	
	int i;
		 for (i = 0; i < SIZE; i++)
		      {
			if(array[i]>*max)
				{
				*max=array[i];
				} 
			if(array[i]<*min)
				{
				*min=array[i];
				}
		      }
		
	
		
		     
   }


