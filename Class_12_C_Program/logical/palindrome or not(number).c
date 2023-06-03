#include <stdio.h>
int main()
{
	int num, cpy, rem, sum = 0;

	printf("Enter any number: ");
	scanf("%d", &num);
	cpy = num;
	while (cpy != 0)
	{
		rem = cpy % 10;
		sum = sum * 10 + rem;
		cpy /= 10;
	}
	// eg 1001 is palindrome
	if (sum == num)
		printf("%d is palindrome number", num);
	else
		printf("%d is not palindrome number", num);

	return 0;
}