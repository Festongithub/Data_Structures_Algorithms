#include <stdio.h>
const int Numbers = 3;

int main()
{
	int var []  = {120, 450, 570};
	int i, *ptr[Numbers];

	for(i = 0; i < Numbers; i++)
	{
		ptr[i] = &var[i];
	}
	for( i = 0; i < Numbers; i++)
	{
		printf("var[%d] = %d\n", *ptr[i]);
	}

	char greetings[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("Greetings message: %s\n", greetings[5]);
	return (0);
}
