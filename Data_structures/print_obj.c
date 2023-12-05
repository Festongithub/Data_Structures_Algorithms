#include <stdio.h>
#include <stdlib.h>

/**
 * print_school  - prints "school"
 *
 * Return: nothing
 */

void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	printf("%s\n", str);
}

int main(void)
{
	int n;
	char *arr;

	n = 8;
	arr = malloc(n * sizeof(char));
	printf("%d bytes\n", arr);
	print_school();
	return(0);
}

