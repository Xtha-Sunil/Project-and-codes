#include <stdio.h>
int main()
{
	FILE *fp;
	char name[20], addr[20];
	int salary;

	fp = fopen("file.txt", "w");
	char ans;
	do
	{
		printf("Enter name, address and salary of the employee ");
		scanf(" %s %s %d", name, addr, &salary);
		fprintf(fp, "%s \t%s \t%d \n", name, addr, salary);

		printf("\nAdded data successfully.\n");
		printf("Any more data, press 'y/Y' for continue ");
		scanf(" %c", &ans);
	} while (ans == 'y' || ans == 'Y');

	fclose(fp);
	return 0;
}