#include<stdio.h>
#include<stdlib.h>




int main() 
{
	float a[5], rate[5] = { 1.1, 1.105, 1.11, 1.115, 1.12 };
	for (int i = 0; i < 5; i++) a[i] = 5000;
	printf("    rate      10.0%%       10.5%%       11.0%%       11.5%%       12.0%%\n");
	printf("year\n");
	for (int y = 1; y < 16; y++)
	{
		for (int i = 0; i < 5; i++) a[i] *= rate[i];
		printf("%2dyears    %8.2f    %8.2f    %8.2f    %8.2f    %8.2f\n", y, a[0], a[1], a[2], a[3], a[4]);
	}

}