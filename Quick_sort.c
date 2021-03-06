#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };
void quicksort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (data[i] <= data[key]) {
			i++;
		}
		while (data[j] >= data[key]&&j>start) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}
int main() {
	int i, j,temp;
	quicksort(data, 0, number - 1);
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}