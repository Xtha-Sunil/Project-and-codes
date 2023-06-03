#include <stdio.h>

void add(int a, int b)
{
	int sum = a + b;
	printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main()
{
	int x, y;
	printf("Enter any two number: ");
	scanf(" %d %d", &x, &y);
	add(x, y);
	return 0;
}