#include <stdio.h>
int main(void) {
	int i, j, n,m, result = 0, add = 1;
	int arr[20][20];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i][0]);
	}
	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {
			arr[i][j] = arr[i][j-1] - arr[i - 1][j - 1];
		}
	}
	m = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		m++;
	}
}
