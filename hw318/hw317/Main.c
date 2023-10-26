#include<stdio.h>
#include<stdlib.h>




int main() 
{
	float a = 0;
	while (1) {
		printf("enter sales in dollars(-1 to end):");
		scanf("%f", &a);
		if (a != -1) {
			printf("salary is:%0.2f\n", (200.00 + a * 0.09));
		}
		else {
			break;
		}
	}

	return 0;
}