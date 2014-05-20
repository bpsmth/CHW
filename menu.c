/* Braden Smith
   9/22/2010
   menu.c
   
*/

#include<stdio.h>
int main(void)
	{
	int userchoice;
	int i;
	int o=0;
	int balance=100,withdrawl,deposit;
	
	while(userchoice!=5)
	{
	printf("Welcome to the ATM:\n1. Check Balance\n2. Deposit\n3. Withdrawl\n4. Quick Withdrawl $25\n================\n5. Exit\n");
	scanf("%d",&userchoice);
	if(userchoice==1||userchoice==2||userchoice==3||userchoice==4||userchoice==5)
	{
	switch(userchoice)
		{
		case 1: 
			printf("Your balance is $%d \n",balance);
			break;
		case 2:
			printf("Enter deposit amount:");
			scanf("%d",&deposit);
			balance=balance+deposit;
			printf("Your new balance is $%d \n",balance);
	
			break;
		case 3:
			printf("Enter withdrawl amount:");
			scanf("%d",&withdrawl);
			if(withdrawl<balance)
			{
				balance=balance-withdrawl;
				printf("Your new balance is $%d \n",balance);
			}
			else
			{
				printf("You have insufficient funds to make this transaction. \n");
			}
			break;
		case 4: 
			if(25<balance)
			{
				balance=balance-25;
				printf("Your new balance is $%d \n",balance);
			}
			else
			{
				printf("You have insufficient funds to make this transaction. \n");
			}
			break;
		
		case 5: 
			break;
		}//end of switch
	}//end of if
	else
	{
	printf("You entered an invalid submission.");
	}//this protects from people entering random stuff
	printf("\n");
	}//end of while
	
	
	}
