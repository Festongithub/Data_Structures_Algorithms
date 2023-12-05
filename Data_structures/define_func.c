#include <stdio.h>
#include <string.h>
int findArea(int a, int b)
{
	printf("%d\n",  a*b);
}

void  give_name(char *name)
{
	int i = strlen(name);
	printf("name  %s consist of  %d characters \n", name, i);
}
int main()
{
	findArea(67, 89);
	give_name("Bob");
}
