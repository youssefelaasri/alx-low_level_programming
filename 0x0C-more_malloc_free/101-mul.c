#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int is_digit(char *n)
{
	long unsigned int i;

	for (i = 0; i < strlen(n); i++)
	{
		if (!isdigit(n[i]))
		{
			return (0);
		}
	}
	return (1);
}
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) ||  !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d", *argv[1] * *argv[2]);
	return (0);
}