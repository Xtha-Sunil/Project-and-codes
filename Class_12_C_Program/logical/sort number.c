#include <stdio.h>
int main()
{
	int n;
	printf("Enter how many data : ");
	scanf("%d", &n);
	int num[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			//ascending order
			if (num[j] > num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	printf("\nIn ascending order: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", num[i]);

	return 0;
}