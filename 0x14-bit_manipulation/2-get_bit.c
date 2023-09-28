#include "main.h"
/**
*get_bit - fun
*@index: index
*@n: dum
*Return: depends
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
