/* Braden Smith
   9/1/2010
   evenodd.c
   Program checks to see if two numerical inputs are the same, then either prints sum, or checks to see if they are even or odd
*/

#include<stdio.h>
int main(void)
	{
	int number1;
	int number2;
	int EO;
	int sum;
	printf("Please input first number: \n");
	scanf("%d",&number1);
	printf("Please input second number: \n");
	scanf("%d",&number2);
	
	if(number1==number2)
		{
		EO=number1%2;
		if(EO==0)
			{
			printf("Even Numbers.\n");
			}
		else
			{
			printf("Odd Numbers. \n");
			}
		}
	else
		{
		sum=number1+number2;
		printf("The sum of the numbers was %d \n", sum);
		}
	
	}
