#include<stdio.h>
#include<stdlib.h>




int main() 
{
	int number;
	float balance,charges,credits,limit;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &number);
		if (number == -1) break;
		printf("Enter beginning balance:");
		scanf("%f", &balance);
		printf("Enter total charges:");
		scanf("%f", &charges);
		printf("Enter total credits:");
		scanf("%f", &credits);
		printf("Enter credit limit:");
		scanf("%f", &limit);
		balance = balance + charges - credits;
		if (balance>limit)
		{
			printf("account:       %d\n",number);
			printf("credit limit:  %0.2f\n",limit);
			printf("balance:       %0.2f\n",balance);
			printf("Credit Limit Exceeded\n\n");
		}
		else
		{
			printf("\n");
		}
	}

}