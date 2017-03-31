#include <stdio.h> 

int n,a;
void testfuntion(int a) {
	if (a == 0) return ;
	else {
		testfuntion(a - 1);
		printf("%d\n", a);
	}
}

int main(void) {
	scanf("%d", &n);
	testfuntion(n);
}