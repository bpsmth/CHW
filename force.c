/* Braden Smith
   8/25/10
   Force.c
   This program prompts user for mass and accleration then calculates forcee */



#include<stdio.h>
int main(void)
	{
	int mass;
	int Acc;
	int Force;
	printf("Enter Mass\n");
	scanf("%d",&mass);
	printf("Enter Acceleration:\n");
	scanf("%d",&Acc);
	Force=mass*Acc;
	if(Force>1500)
		{
		printf("Your force was greater than 1500 \n Your force was: 			%d\n",Force);
		}
	else
		{
		printf("The force was less than 1500 \n Your force was: %d\n",Force);
		
		}
		

	}
