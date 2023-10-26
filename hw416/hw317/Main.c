#include<stdio.h>
#include<stdlib.h>




int main() 
{
	printf("(A)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (int i = 10; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (int i = 10; i >= 1; i--) {
		for (int k = 0; k < 10 - i; k++)printf(" ");
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (int i = 1; i <= 10; i++) {
		for (int k = 0; k < 10 - i; k++)printf(" ");
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

}