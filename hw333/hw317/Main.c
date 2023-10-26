#include<stdio.h>
#include<stdlib.h>




int main() 
{
	int l = 0, b = 0;
	scanf("%d %d", &l, &b);
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < b; j++) {
			if ((i == 0) || (i == l - 1) || (j == 0) || (j == b - 1)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}