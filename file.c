/* Braden Smith
   11/3/2010
   file.c
   
*/

#include<stdio.h>

int main(void)
	{
	
	int input,total,count=0,average;
	FILE *fp, *fw;
	if((fp=fopen("numbers.txt","r"))==NULL)
		{
		printf("The file did not open correctly!");
		}
	
	
	fscanf(fp,"%d",&input);
	while(!feof(fp))
		{
		
		
			total=total+input;
			count=count+1;
			
		fscanf(fp,"%d",&input);
		printf("%d",count);
		}
	//count=count-1;
	average=total/count;
	
	fw=fopen("output.dat","w");
	fprintf(fw,"The number of integers was: %d \n",count);
	fprintf(fw,"The average of integers was: %d \n",average);

	}
