#include <stdio.h>
#include <stdarg.h>
/**
*print_all - fun
*@format: for
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *fmt = format;

	va_start(args, format);
	while (*fmt)
	{
		if (*fmt == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (*fmt == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*fmt == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (*fmt == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		fmt++;
		if (*fmt)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
