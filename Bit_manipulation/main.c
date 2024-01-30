#include <stdio.h>

void intToBinary(int n)
{
	for (int i = 31; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		printf("%d", bit);
	}
}

int main()
{
	int y = 45;
	printf("Binary rep of %d is :", y);
	intToBinary(y);
	return (0);
}
