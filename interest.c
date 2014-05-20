/* Braden Smith
   10/13/2010
   interest.c
   
*/

#include<stdio.h>
#include<math.h>



float compound_interest(void);

int main(void)
	{
	int result;
	compound_interest();

	}


/*Function compound_interest()
When called prompts user for loan interest then prints out information on loan ammount 
*/


float compound_interest(void)
	{
	
	float interest,principle,rate,monthp;
	int month;
	printf("Please enter the cost of your truck: \n");
	scanf("%f",&principle);
	printf("Please enter the interest rate: \n");
	scanf("%f",&rate);
	printf("Please enter the monthly payment: \n");
	scanf("%f",&monthp);
	rate=rate/100;
	printf("Month    Principle      Interest\n");
	month=1;
	while(principle>0)
		{
		interest=principle*rate/12;
		principle=principle+interest-monthp;
		printf("%2d %16.2f %16.2f\n",month,principle,interest);
		month++;
		}
	month=month-1;
	printf("It will take you %d months to pay off your loan \n",month);
	
	}


