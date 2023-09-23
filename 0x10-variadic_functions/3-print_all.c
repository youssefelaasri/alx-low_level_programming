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
		switch (*fmt)
		{
			case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
			break;
			case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
			case 'f':
			f = (float)va_arg(args, double);
			printf("%f", f);
			break;
			case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", s);
		}
		fmt++;
		if (*fmt && (*fmt == 'c' || *fmt == 's' || *fmt == 'i' || *fmt == 'f'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
