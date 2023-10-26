#include<stdio.h>
#include<stdlib.h>




int main() 
{
	for (int i = 1; i <= 500; i++) {
		for (int j = i; j <=500; j++)
		{
			for (int k = 1; k <= 500; k++)
			{
				if (i*i + j * j == k * k)printf(" %d %d %d\n", i, j, k);
			}
		}
	}
}