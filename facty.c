/* Braden Smith
   10/11/2010
   facty.c
   
*/

#include<stdio.h>
#include<math.h>



float fact(float y);

int main(void)
	{
	float y;
	printf("Please enter the number you wish to find the factorial of: \n");
	scanf("%f",&y);
	fact(y);
	



	}


/*Function fact()
Takes the input of what number user wishes to find factorail of and does
*/


float fact(float y)
	{
	float i, total=y;
	for(i=1;i<y;i++)
		{
		total=total*(y-i);

		}
	printf("The factorial of %f is %f  \n",y,total);
	}


