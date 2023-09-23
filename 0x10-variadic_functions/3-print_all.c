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

	va_start(args, format);
	while (*format)
	{
		if (*format == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (*format == 's')
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
		format++;
		if (*format)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
