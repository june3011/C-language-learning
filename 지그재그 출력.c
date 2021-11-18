#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int i, j;
	int t[51][51];
	int cnt = 1;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			t[i][j] = cnt++;
		}
	}
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < n; j++) {
				printf("%4d", t[i][j]);
			}
		}
		else {
			for (j = n - 1; j >= 0; j--) {
				printf("%4d", t[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}