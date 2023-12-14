/**
*get_endianness - fun
*Return: depends
*/
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (*p)
		return (1);
	else
		return (0);
}
