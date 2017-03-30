#include <stdio.h>

int main(void) {
	int arr[103][103];
	int i, j,k, n,a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = ++a;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j % 2 == 1) {
				k = n-i-1;
				printf("%d ",arr[j][k]);
			}
			else {
				printf("%d ", arr[j][i]);
				
			}
		}printf("\n");
	}
}
