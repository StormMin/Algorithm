#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, min, index,temp;
	int a[10] = { 1,4,2,3,8,5,7,6,10,9 };
	for (i = 0; i < 10; i++) {
		min = 99999;
		for (j = i; j < 10; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		temp = a[i];
		a[i] = a[index];
		a [index]= temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}