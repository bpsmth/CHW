/* Braden Smith
   9/13/2010
   While.c
   
*/

#include<stdio.h>
int main(void)
	{
	int stop;
	int input;
	int sum;
	stop=0;
	printf("Please enter your number: \n");
	scanf("%d",&input);
	while(stop==0)
		{
		sum=sum+input;
		
			
		if(input==-1)
			{
			sum=sum+1;
			stop=1;
			printf("Your sum is %d \n",sum);
			}
		if(stop==0)
			{
			printf("Please enter your number: \n");
			scanf("%d",&input);
			}

		}
	printf("\n");
	
	}
