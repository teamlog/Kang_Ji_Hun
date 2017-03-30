#include <stdio.h>
int main(void) {
	int h, w, n, l, d, x, y, i, j;
	int arr[103][103] = { 0 };

	scanf("%d %d %d", &h, &w, &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0) {
			for (j = 0; j < l; j++) {
				arr[x][y] = 1;
				y++;
			}
		}
		else {
			for (j = 0; j < l; j++) {
				arr[x][y] = 1;
				x++;
			}
		}
	}for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++) {
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}
