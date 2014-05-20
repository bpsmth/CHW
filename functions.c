/* Braden Smith
   10/6/2010
   functions.c
   
*/

#include<stdio.h>
#include<math.h>



int mutiple(int Number1,int number2);
int even(int evenodd);

int main(void)
	{
	int result,evenorodd, userchoice;
	printf("Please select which program you wish to run: \n 1. Multiple detector \n 2. Even or odd \n ");
	scanf("%d",&userchoice);
	if(userchoice==1 || userchoice==2)
		{
		if(userchoice==1)
			{
			int Number1;
			int number2;
			printf("Enter Number 1:\n");
			scanf("%d",&Number1);
			printf("Enter Number 2: \n");
			scanf("%d",&number2);

			result=multiple(number2,Number1); 
			if(result==1)
				{			
				printf("The first number was a multiple of the second!\n");
				}
			else
				{
				printf("The first was not a multiple of the second!\n");
				}
			}
		//If the user chooses to run the multiple program it runs the self-contained program and accepts input from user and returns a result
		if(userchoice==2)
			{
			int evenodd;
			printf("Enter a number to see if it is even or odd:\n");
			scanf("%d",&evenodd);
			evenorodd=even(evenodd);
			if(evenorodd==1)
				{
				printf("The number is even!\n");
				}
			else	
				{
				printf("The number was odd!\n");
				}
			}
		}
	else
		{
		printf("You entered an invalid input...please restart program. \n");
		}
	}


/*Function multiple()
	Takes two user input parameters then returns a 1 if the first is a multiple of the second and a 0 if it is not.
*/


int multiple(number2,Number1)
	{
	
	int remain;
	
	remain=number2%Number1;
	if(remain==0)
		{
		return 1; 
		}
	else
		{
		return 0;
		}



	}

/*Function even()
This function reads in a new number by the user and then returns a 1 if it is even or 0 if it is odd*/




int even(evenodd)
	{
	
	float remain;
	
	remain=evenodd%2;
	if(remain==0)
		{
		return 1;
		
		}
	else
		{
		return 0;
		}
	
	


	}

