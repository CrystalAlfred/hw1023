#include<stdio.h>
#include<stdlib.h>




int main() 
{
	while (1)
	{
		float hours = 0, rate = 0;
		printf("Enter # of hours worked(-1 to end):");
		scanf("%f", &hours);
		if (hours == -1)break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf("%f", &rate);
		if (hours > 40) {
			printf("salary is $%0.2f\n", (hours*rate) + ((hours - 40)*(rate / 2)));
		}
		else {
			printf("salary is $%0.2f\n", (hours*rate));
		}
	}
}