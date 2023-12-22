#include <stdio.h>
#include <stdlib.h>

struct Num 
{
	int n1, n2;
};

int main()
{
	int n;
	struct Num obj;

	FILE *fptr;

	if ((fptr = fopen("module_tests.py", "wb")) == NULL)
	{
		printf("Error! opening file");
		exit(1);
	}

	for (n = 1; n < 10; n++)
	{
		obj.n1 = n;
		obj.n2 = 12 + n;

		fwrite(&obj, sizeof(struct Num), 1, fptr);
	}
	fclose(fptr);
	printf("Get you file amigo, buenos dias\n");
	printf("Avec certitude\n");

	return (0);
}
