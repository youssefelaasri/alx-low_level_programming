#include "main.h"

/**
  *_islower - func
  *Return: depends
  *@c: para
  */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
