#include <stdio.h> 

void Function(int a, int b, int num) {
	if (a <= num&&num <= b) {
		if (num % 2 == 1){
			printf("%d ", num);
		}
		return Function(a, b, num + 1);
	}
	else {
		return;
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	Function(n, m,n);
}
