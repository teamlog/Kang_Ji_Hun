#include <stdio.h>

int main(void) {
	int arr[51][51];
	int i, j, n,a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = ++a;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[j][i]);
		}printf("\n");
	}
}
