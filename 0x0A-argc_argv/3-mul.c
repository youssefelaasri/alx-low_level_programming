#include <stdlib.h>
#include <stdio.h>

/**
  *main - fun
  *@argc: count
  *@argv: array
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
