/* Braden Smith
   10/18/2010
   fib.c
   
*/

#include<stdio.h>
#include<math.h>



int fibnum(void);

int main(void)
	{
	
	fibnum();
	
	}


/*Function fibnum()
calculates and prints first 47 numbers in fib sequence.
*/


int fibnum(void)
	{
	
	
	int i,c;
	double fib[47];

	
		fib[0]=1;
		fib[1]=1;
		for(i=0;i<47;i++)
		{
		if(i!=0 && i!=1)
			{
			fib[i]=fib[(i-1)]+fib[(i-2)];
			}
		}
		printf("Index Value, Fib Value \n");
		for(i=0;i<47;i++)
		{
		c=i+1;
		printf("%d, %.0lf \n",c,fib[i]);
		}
		
	
	}


