#include "main.h"
/**
  *swap_int - swap fun
  *@a: first num
  *@b: second num
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

