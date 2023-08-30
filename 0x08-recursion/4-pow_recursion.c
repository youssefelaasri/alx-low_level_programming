#include "main.h"
/**
  *_pow_recursion - fun
  *@x: first
  *@y: second
  *Return: return depends
  */
int _pow_recursion(int x, int y)
{
	int n = y;

	if (y < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (x * _pow_recursion(x, n - 1));
}
