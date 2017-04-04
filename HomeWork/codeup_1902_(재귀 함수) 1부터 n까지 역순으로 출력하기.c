#include <stdio.h> 

int n, a;

void Function(int a) {
	if (a == 0) {
		return;
	}
	else {
		printf("%d\n", a);
		Function(a - 1);
	}
}

int main(void) {
	scanf("%d", &n);
	Function(n);
}
