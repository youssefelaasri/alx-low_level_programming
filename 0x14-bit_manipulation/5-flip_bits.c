/**
*flip_bits - fun
*@n: first
*@m: second
*Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = 0;
	unsigned int i = 0;

	l = m ^ n;

	while (l)
	{
		if (l & 1)
		{
			i++;
		}
		l = l >> 1;
	}
	return (i);
}
