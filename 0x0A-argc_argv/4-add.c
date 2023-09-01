#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - fun
  *@argc: coun
  *@argv: arra
  *Return: dep
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	char *p;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			for (j = 0; p[j] != '\0'; j++)
			{
				if (!isdigit(p[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) >= 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
		return (0);
}
