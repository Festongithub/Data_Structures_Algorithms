#include <stdio.h>

void decimalToBinary(int num)
{
	if (num == 0)
	{
		printf("Can't continue\n");
	}

	// Stores binary representation of number
	
	int  binary[32];
	int i = 0;
	for (; num > 0;)
	{
		binary[i++] = num % 2;
		num /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}

int main()
{
	int num = 99;

	decimalToBinary(num);
	return (0);
}
