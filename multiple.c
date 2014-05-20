/* Braden Smith
   8/30/2010
   multiple.c
   This program takes two numbers and checks if one is the multiple of the other */

#include<stdio.h>
int main(void)
	{
	int Number1;
	int number2;
	int remain;
	printf("Enter Number 1:\n");
	scanf("%d",&Number1);
	printf("Enter Number 2: \n");
	scanf("%d",&number2);
	remain=number2%Number1;
	if(remain==0)
		{
		printf("Yes, the first is a multiple of the second number\n");
		}
	else
		{
		printf("No, the first is not a multiple of the second number\n");		
		}
}
