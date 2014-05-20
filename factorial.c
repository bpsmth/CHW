/* Braden Smith
   9/20/2010
   factorial.c
   
*/

#include<stdio.h>
int main(void)
	{
	int userinput;
	int i;
	int o=0;
	int total;
	
	printf("Please enter the number for a factorial:\n");
	scanf("%d",&userinput);
	total=userinput;
	if(userinput==0)
		{
		printf("The factorial of 0! is 1");
		o=1;
		
		}
	else
	{
	for(i=1;i<userinput;i++)
		{
		total=total*(userinput-i);

		}
	
	printf("\n");
	printf("The factorial of %d! is %d",userinput,total);
	}
	printf("\n");
	}
