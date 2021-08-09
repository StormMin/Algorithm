#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int number = 4;
int INF = 10000000;
// 100이 INF 무한대값 즉 없다는 뜻
int a[4][4] = {
	{0,5,100,8},
	{7,0,9,100},
	{2,100,0,4},
	{100, 100,3,0}
};
void floydWarshall() {
	// number=4;
	int d[4][4];
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			d[i][j] = a[i][j];
		}
	}
	for (int k = 0; k < number; k++) {
		for (int i = 0; i < number; i++) {
			for (int j = 0; j < number; j++) {
				if (d[i][k] + d[k][j] < d[i][j]) {
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	floydWarshall();
	return 0;
}