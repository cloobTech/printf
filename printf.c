#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...)
{
	int i, k;
	va_list pams;
	char *string;

	va_start(pams, format);

	i = 0;
	k = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					k += _putchar(va_arg(pams, int));
					i += 2;
					break;
				case 's':
					string = va_arg(pams, char *);
					(string == NULL && (string = "(null)"));
					k += _prntstr(string);
					i += 2;
					break;
				case '%':
					k += _putchar(format[i + 1]);
					i += 2;
					break;
				default:
					k += _putchar(format[i]);
					k += _putchar(format[i + 1]);
					i += 2;


			}
		}
		k += _putchar(format[i]);
		i++;
	}
	va_end(pams);
	return (k);
}
