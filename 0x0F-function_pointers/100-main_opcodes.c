#include <stdio.h>
#include <stdlib.h>
/**
*main - func
*@argc: argc coun
*@argv: arg v
*Return: depens
*/
int main(int argc, char *argv[])
{
	int i, j;
	int (*ptrf)(int, char **) = main;
	unsigned char k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < i; j++)
	{
		k = *(unsigned char *)ptrf;
		printf("%.2x", k);

		if (j == i - 1)
			continue;
		printf(" ");

		ptrf++;
	}

	printf("\n");

	return (0);
}
