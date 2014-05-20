/* Braden Smith
   10/11/2010
   mycos.c
   
*/

#include<stdio.h>
#include<math.h>



float mycos(float userinput);

int main(void)
	{
	float userinput, result;
	printf("Please enter the angle you wish to get the cos of in degrees: \n");
	scanf("%f",&userinput);
	result=mycos(userinput);
	printf("The cos is %f \n",result);



	}


/*Function mycos()
takes user angle input in degrees and outputs the cos.
*/


float mycos(float userinput)
	{
	float pi=3.141592653589793238462643;
	float radians, result;
	

	
	radians=userinput*(pi/180);
	result= cos(radians);
	return result;
	}


