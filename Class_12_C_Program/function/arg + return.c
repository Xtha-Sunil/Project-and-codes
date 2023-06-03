#include <stdio.h>

int add(int a, int b)
{
	int sum = a + b;
	return sum;
}

int main()
{
	int x, y;
	printf("Enter any two number: ");
	scanf(" %d %d",&x,&y);
	int result = add(x, y);
	printf("The sum of %d and %d is %d\n", x, y, result);
	return 0;
}