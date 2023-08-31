#include "main.h"

int is_pal(char *s, int start, int end)
{
	if (s[start] == '\0')
		return 1;
	if (s[start] != s[end])
		return 0;
	else
		return is_pal(s, start++, end--);


int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return is_pal(s, 0, i - 1);
}
