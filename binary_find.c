#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int binary_find(int a[], int n, int key) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            return 1;
        }
        else if (a[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return 0;
}