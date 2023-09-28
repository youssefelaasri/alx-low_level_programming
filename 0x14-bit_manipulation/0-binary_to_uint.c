#include "main.h"
#include <string.h>

/**
*binary_to_uint - fun
*@b: string
*Return: dep
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result = result + (b[i] - 48) * (1 <<((strlen(b) - 1) - i));
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
