#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int cnt[5];
    int temp;
    int array[30] = { 1,3,2,4,3,2,5,3,1,2,3,4,4,3,5,1,2,3,5,2,3,1,4,3,5,1,2,1,1,1 };
    for (int i = 0; i < 5; i++) {
        cnt[i] = 0;
    }
    for (int i = 0; i < 30; i++) {
        cnt[array[i]-1]++;
    }
    for (int i = 0; i < 5; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                printf("%d",i+1);
            }
        }
    }
    
    return 0;
}