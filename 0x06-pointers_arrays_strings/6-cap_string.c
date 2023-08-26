#include "main.h"
/**
  *toup - func
  *@c: icnt
  *Return: return
  */
int toup(int c)
{
	c = c - 32;
	return (c);
}
/**
  *cap_string - func
  *@s: string
  *Return: return func
  */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] <= 'z' && s[i] >= 'a')
			s[i] = toup(s[i]);
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
				|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = toup(s[i + 1]);
			}
		}
	}
	return (s);
}
