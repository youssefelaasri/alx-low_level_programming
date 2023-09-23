#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - fun
*@n: number of
*@separator: dep
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *ptr;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
