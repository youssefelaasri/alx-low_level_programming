#include <stdio.h>
#include <stdlib.h>
/**
  *main - fun
  *@argc: coun
  *@argv: array
  *Return: dep
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			j = atoi(argv[1]);
			i =  j / 25;
			j = j % 25;
			i = i + j / 10;
			j = j % 10;
			i = i + j / 5;
			j = j % 5;
			i = i + j / 2;
			j = j % 2;
			i = i + j / 1;
			printf("%d\n", i);
		}
	}
	return (0);
}
