#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int num[10];
	int t = 0;
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 100 + 1;
		printf("%d ", num[i]);
	}
	for (int k = 0; k < 10; k++) {
		for (int j = 0; j < 9; j++) {
			if (num[j] > num[j+1]) {
				t = num[j];
				num[j] = num[j+1];
				num[j+1] = t;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
	
	return 0;
}