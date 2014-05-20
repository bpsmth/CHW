/* Braden Smith
   9/27/2010
   hilow.c
   
*/

#include<stdio.h>
int main(void)
	{
	int num=0;
	int i=0;
	int user;
	srandom(time(NULL));
	num = (random()%100)+1;  /* 1-100  inclusive */  
	printf("Guess a number (1-100)\n");
	
	while(i!=1)
		{
		scanf("%d",&user);
		if(user>=1 && user<=100)
			{
			if(user<num)
				{
				printf("HIGHER!\n");
				}
			if(user>num)
				{
				printf("LOWER!\n");
				}
			if(user==num)
				{
				printf("CORRECT! The correct number was: %d\n",num);
				i=1;
				}
			}

		else
			{
			printf("Error- Your guess was outside of boundaries. Please guess again!\n");
			}
		}
	}
