#include <stdio.h> 
double n;

double funtion(double n) {
	if (n < 0) {
		n *= -1;
	}
	return n;
}
int main(void) {
	scanf("%lf", &n);
	printf("%.10g", funtion(n));
}