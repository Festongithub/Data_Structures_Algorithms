#include <stdio.h>

void numBinary(int num)
{
	for (int i = 31; i >= 0; i--)
	{
		int mask = ( 1 << i);

		if (num & mask)
			printf("1");
		else
			printf("0");
	}
}

int main()
{
	int num = 90;
	numBinary(num);
	return (0);
}
