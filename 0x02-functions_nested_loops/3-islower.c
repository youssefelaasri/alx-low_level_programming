#include "main.h"

/**
  *_islower - func
  *Return: depends
  */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
}
