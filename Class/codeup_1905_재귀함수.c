#include <stdio.h> 

int n,m, a, b;

int testfuntion(int a) {
	if (n == m) {
		return a;
	}
	else {
		m++;
		return testfuntion(a - 1) + a;
	}
}

int main(void) {
	scanf("%d", &n);
	printf("%d", testfuntion(n));
}