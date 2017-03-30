#include <stdio.h>
int main(void) {
	int i, j, n, result = 0, add = 1;
	int arr[103][103];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = add;
			add++;
		}
	}
	for (i = 0; i < n; i++) {
		result += arr[0][i];
		result += arr[n - 1][i];
	}
	for (i = 1; i < n-1; i++) {
		result += arr[i][0];
		result += arr[i][n-1];
	}
	printf("%d", result);
}
