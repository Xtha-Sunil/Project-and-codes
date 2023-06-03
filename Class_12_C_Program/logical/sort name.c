#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter how many data : ");
	scanf("%d", &n);
	char word[n][20], temp[20];

	for (int i = 0; i < n; i++)
		scanf("%s", word[i]);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			/* some ASCII values
			A = 65
			a = 97
			'0' = 48
			'1' = 49
			<space> = 32
			*/
			
			
			/* HOW strcmp() works
			strcmp("aa", "aba");
			
			1) It compares first-first letter
			2) As they are SAME it returns 97-97 = 0
			3) It checks for second-second and returns 97-98 = -1
			4) As soon as it returns non-zero value it terminates
			*/
			
			
			//ascending order
			if (strcmp(word[j], word[j + 1]) >= 1)
			{
				strcpy(temp, word[j]);
				strcpy(word[j], word[j + 1]);
				strcpy(word[j + 1], temp);
			}
		}
	}
	printf("\nIn ascending order: \n");
	for (int i = 0; i < n; i++)
		printf("%s ", word[i]);

	return 0;
}