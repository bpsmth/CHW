/* Braden Smith
   9/15/2010
   triangle.c
   
*/

#include<stdio.h>
int main(void)
	{
	int input;
	int i=0;
	int o=0;
	
	
	printf("Please enter triangle width at base: \n");
	scanf("%d",&input);
	
	while(o<input)
		{
		i=0;
		while(i<=o)
		{
			printf("X");
			i++;	
		}
		o++;
		printf("\n");
		}
	printf("\n");
	
	}
