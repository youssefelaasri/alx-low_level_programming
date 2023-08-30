#include "main.h"
/**
  *factorial - fun
  *@n: num
  *Return: return 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
