#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

	fp = fopen("clients_name.txt", "w");

	if (fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	char str[] = "name: Julien Barbier, age: 24 ,city: Paris, school: Holberton";

	fputs(str, fp);

	fclose(fp);
	printf("File Successfully created\n");
	return (0);
}
