#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_school(void)
{
	char str[] = "Holberton";
	str[0] = 'k';
	printf("%s\n", str);
}

void test_malloc(char c1, char c2, char c3)
{
	char *a;
	char b;

	a = malloc(sizeof(*a) * 3);
	a[0] = c1;
	a[1] = c2;
	a[2] = c3;

	b = a[0] + a[1] + a[2];
	printf("%s + %s + %s = %s\n", a[0], a[1] , a[2], b);
}
int main(void)
{
	print_school();

	char *s ;
	s = malloc(sizeof(char) * 4);
	s[0] = 'H';
	s[1] = 'o';
	s[2] = 'l';
	s[3] = 'y';

	printf("%s\n", s);
	test_malloc("Hello", "World", "C");

	return (0);
}
