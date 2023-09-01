#include <stdio.h>
/**
  *main - fun
  *@argc: coun
  *@argv: aarrra
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
