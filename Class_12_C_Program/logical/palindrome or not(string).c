#include <stdio.h>
#include <ctype.h> //for tolower string function
#include <string.h>
int main()
{
	char word[20];

	printf("Enter any word: ");
	scanf("%s", word);

	/* THIS CODE WONT WORK IN DEVC++ 

	strlwr(word);
	if (strcmp(word, strrev(word)) == 0)
		printf("%s is palindrome word.", word);
	else
		printf("%s is not palindrome number.", word);
	*/

	int len = strlen(word), isPalindrome = 1;

	for (int i = 0; i < len; i++)
		word[i] = tolower(word[i]);

	for (int i = 0; i < len / 2; i++)
	{
		if (word[i] != word[len - i - 1]) //-1 for start index is 0
		{
			isPalindrome = 0;
			break;
		}
	}

	if (isPalindrome == 1)
	{
		printf("%s is a palindrome word.", word);
	}
	else
	{
		printf("%s is not a palindrome word.", word);
	}
	return 0;
}