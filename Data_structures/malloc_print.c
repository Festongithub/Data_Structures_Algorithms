#include <stdio.h>
#include <stdlib.h>


void m (int n0, int n1, int n2)
{
	int *t;
	int sum;

	 t = malloc(sizeof(*t) * 3);
	 t[0] = n0;
	 t[1] = n1;
	 t[2] = n2;

	 sum = t[0] + t[1] + t[2];
	 printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	 free(t);
}

void mul(int a, int b, int c)
{
	int *s ;
	int prod;

	s = malloc(sizeof(*s) * 3);
	s[0] = a;
	s[1] = b;
	s[2] = c;
	prod = s[0] * s[1] * s[2];
	printf("%d * %d * %d = %d\n", s[0], s[1], s[2],  prod);
	free(s);
}

int main(void)
{
	char *str;
	str = malloc(sizeof(char) *3);
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';

	int *ptr;
	ptr = malloc(sizeof(int) * 4);
	ptr[0]  = 45;
	ptr[1] = 46;
	ptr[2] = 47;
	ptr[3] = 48;
	printf("%d  %d  %d  %d \n", ptr[0], ptr[0], ptr[1], ptr[2], ptr[3]);
	printf("%s\n", str);

	m(98, 402, -1024);
	mul( 90, 80, 543);
	return (0);
}
