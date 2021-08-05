#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
int main(void) {
	int n, result = 0;
	scanf("%d" ,& n);
	result += n / 500;
	n %= 500;
	result += n / 100;
	n %= 100;
	result += n / 50;
	n %= 50;
	result += n / 10;
	n %= 10;
	printf("%d\n", result);
	return 0;
}