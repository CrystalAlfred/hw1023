#include<stdio.h>
#include<stdlib.h>




int main() 
{
	int a;
	printf("請輸入菱形大小:");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i; j++) printf(" ");
		for (int j = 0; j < i*2+1; j++) printf("*");
		printf("\n");
	}
	for (int i = a-2; i >= 0; i--) {
		for (int j = 0; j < a - i; j++) printf(" ");
		for (int j = 0; j < i * 2 + 1; j++) printf("*");
		printf("\n");
	}
}