/* Braden Smith
   10/20/2010
   string.c
   
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>




int main(void)
	{
	char name[80],comp1[80],comp2[80],sappy[80],newname[80];
	int i, c;
	printf("-=-Compliment Generator-=-\n Please input a name:\n");
	scanf("%s",name);
	printf("Please input a complimentary adjective: \n");
	scanf("%s",comp1);
	printf("Please input another complimentary adjective:\n");
	scanf("%s",comp2);
	printf("Please input a 'sappy' noun: \n");
	scanf("%s",sappy);
	c=strlen(sappy);
	for(i=0;i<c;i++)
		{	
		sappy[i]=toupper(sappy[i]);
		}
	c=(strlen(name)-1);
	for(i=0;i<=c;i++)
		{
		newname[i]=name[c-i];
		}
	newname[(c+1)]='\0';
	printf("%s is a %s and %s %s \n",newname,comp1,comp2,sappy);



	
	
	}


