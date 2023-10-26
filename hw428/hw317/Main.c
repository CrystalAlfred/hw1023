#include<stdio.h>
#include<stdlib.h>




int main() 
{
	int mode;
	double salary, a, b, c;
	while (1){
		printf("Enter calculate mode(1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker, 0 = Exit):");
		scanf("%d", &mode);
		if (mode == 0)break;
		switch (mode)
		{
		case 1:
			
			printf("Enter the manager's salary:");
			scanf("%lf", &salary);
			
			break;
		case 2:
			printf("Enter the hourly wage :");
			scanf("%lf", &a);
			printf("Enter the number of hours worked :");
			scanf("%lf", &b);
			if (b>40)
			{
				salary = b * a + (b - 40)*a / 2;
			}
			else
			{
				salary = b * a;
			}
			break;
		case 3:
			printf("Enter the gross weekly sales :");
			scanf("%lf", &a);
			salary = 250 + (0.057*a);
			break;
		case 4:
			printf("Enter the number of pieces produced :");
			scanf("%lf", &a);
			printf("Enter the rate per piece :");
			scanf("%lf", &b);
			salary = b * a;
			break;
		default:
			break;
		}
		printf("the salary is $%.2lf\n", salary);
	}
}