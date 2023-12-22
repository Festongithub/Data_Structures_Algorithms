#include <stdio.h>
#include <stdlib.h>

struct obj
{
	int n1, n2;
};

int main()
{
	int n;
	struct obj text;

	FILE *fptr;

	if ((fptr = fopen("clients.txt", "rb")) == NULL)
	{
		printf("Error! opening file");
		exit(1);
	}

	for (n = 1; n < 10; ++n)
	{
		fread(&text, sizeof(struct obj), 1, fptr);
		printf("n1 : %d\tn2: %d\n", text.n1, text.n2);
	}
	fclose(fptr);
	return (0);
}
