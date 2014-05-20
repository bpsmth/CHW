/* Braden Smith
   9/8/2010
   fibcode.c
   Program c
*/

#include<stdio.h>
int main(void)
	{
	int numbernew=1;
	int numberprevious=1;
	int count=1;
	int usernumber;
	int fib;
	printf("Please input how many numbers you want to calculate: \n");
	scanf("%d",&usernumber);
	usernumber=usernumber-1;
	while(count<usernumber)
		{
		if(count==1)
			{
			printf("%d, ", numbernew);
			printf("%d, ", numberprevious);
			}
			
		fib=numbernew+numberprevious;
		count=count+1;
		numberprevious=numbernew;
		numbernew=fib;
		printf("%d, ",fib);


		}
	printf("\n");
	
	}
