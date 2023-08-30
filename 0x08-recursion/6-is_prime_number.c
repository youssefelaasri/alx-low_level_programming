#include "main.h"
/**
  *is_prime -fun
  *@num: numb
  *@divi: divisor
  *Return: dep
  */
int is_prime(int num, int divi)
{
	if (divi == 1)
		return (1);
	if (num % divi == 0)
		return (0);
	else
		return (is_prime(num, divi - 1));
}
/**
  *is_prime_number - fun
  *@n: para
  *Return: dep
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
