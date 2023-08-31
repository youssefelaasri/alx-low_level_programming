#include "main.h"

/**
  *_sqrt - fun
  *@i: int
  *@n: num
  *Return: deo
  */
int _sqrt(int i, int n)
{
	if (i == n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}

/**
  *_sqrt_recursion- fun
  *@n: num
  *Return: dep
  */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(1, n));
}
