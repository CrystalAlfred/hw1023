#include<stdio.h>
#include<stdlib.h>




int main() 
{
	float principal, rate, days;
	while (1) {
		printf("enter loan principal(-1 to end):");
		scanf("%f", &principal);
		if (principal != -1) {
			printf("Enter interest rate:");
			scanf("%f", &rate);
			printf("Enter tern of the loan in days:");
			scanf("%f", &days);
			printf("the interest charge is $%0.2f\n", (principal*rate*days / 365));

		}
		else {
			break;
		}

	}
}