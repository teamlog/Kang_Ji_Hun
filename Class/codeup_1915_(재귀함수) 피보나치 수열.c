#include <stdio.h>
int n;
int funtion(int a)
{
	if (a == 1)
		return 1;
	else if (a == 2)
		return 1;
	else
		return funtion(a - 1) + funtion(a - 2);
}


int main(void)
{
	scanf("%d", &n);

	printf("%d", funtion(n));
	return 0;
}
