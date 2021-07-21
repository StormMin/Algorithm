#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j,temp;
	int a[10] = { 1,4,2,3,8,5,7,6,10,9 };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9-i; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}