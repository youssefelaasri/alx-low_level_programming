#include "main.h"
/**
  *_strlen_recursion - fun
  *@s: sring
  *Return: returns depend
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i = 1 + (_strlen_recursion(s + 1));
		return (i);
	}
}
