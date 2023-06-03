#include <stdio.h>
int main()
{
	FILE *fp;
	char name[20], addr[20];
	int salary;
	
	//read mode doesnt make new file if not exist
	fp = fopen("file.txt", "r");

	while (fscanf(fp, "%s%s%d", name, addr, &salary) != EOF)
	{
		printf("Name: %s \nAddress: %s \nSalary : %d\n\n", name, addr, salary);
	}

	fclose(fp);
	return 0;
}