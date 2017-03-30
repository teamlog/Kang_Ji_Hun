#include <stdio.h>
int main(void) {
	int n, i, j, x, y;
	int arr[20][20] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		arr[x][y] = 1;
	}
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}
