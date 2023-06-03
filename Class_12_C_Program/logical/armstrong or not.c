#include <stdio.h>
int main()
{
	int num, cpy, rem, sum = 0;

	printf("Enter any 3-digit number: ");
	scanf("%d", &num);
	cpy = num;
	while (cpy != 0)
	{
		rem = cpy % 10;
		sum += rem * rem * rem;
		cpy /= 10;
	}

	//eg 153 is palindrome => 1^3 + 5^3 + 3^3 = 153
	if (sum == num)
		printf("%d is armstrong number", num);
	else
		printf("%d is not armstrong number", num);

	return 0;
}