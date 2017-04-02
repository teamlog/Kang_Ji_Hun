#include <stdio.h>

int main(void) {
	int arr[53][53];
	int i, j, n, x = 0, y = -1, turn = 1, add = 0;
	scanf("%d", &n);
	int m = n;
	while (1) {

		for (i = 0; i < n; i++) {
			arr[y += turn][x] = ++add;
			if (add == m*m) { break; }
		}
		if (add == m*m) { break; }
		n--;
		for (i = 0; i < n; i++) {
			arr[y][x += turn] = ++add;
			if (add == m*m) { break; }
		}
		if (add == m*m) { break; }
		turn = -1;
		for (i = 0; i < n; i++) {
			arr[y += turn][x] = ++add;
			if (add == m*m) { break; }
		}if (add == m*m) { break; }
		n--;
		for (i = 0; i < n; i++) {
			arr[y][x += turn] = ++add;
			if (add == m*m) { break; }
		}if (add == m*m) { break; }
		turn = 1;

	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}
