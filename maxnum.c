/* Braden Smith
   8/30/2010
   maxnum.c
   Program determines biggest of 3 numbers */

#include<stdio.h>
int main(void)
	{
	int n1;
	int n2;
	int n3;
	int large;
	printf("Enter Number 1:\n");
	scanf("%d",&n1);
	printf("Enter Number 2: \n");
	scanf("%d",&n2);
	printf("Enter Number 3:\n");
	scanf("%d",&n3);
	
	if(n1>n2)
		{
		
		large=n1;
		}
	else
		{
		large=n2;
		}
	if(n3>large)
		{
		large=n3;
		}
	
	printf("The largest number was %d \n",large);


	
}
