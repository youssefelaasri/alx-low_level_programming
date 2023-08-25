#include "main.h"
/**
  *_strcmp - fun
  *@s1: para
  *@s2: para
  *Return: depends on
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		else if (s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (s1[i] - s2[i]);
}
