#include <stdio.h> 

void funtion(int a) {
	if (a == 1) {
		printf("%d\n", a);
	}
	else {
		if (a % 2 == 1) {
			printf("%d\n", a);
			funtion(3 * a+1);
		}
		else {
			printf("%d\n", a);
			funtion(a / 2);
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	funtion(n);
}
