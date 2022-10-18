#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf- prints anything in C!
 *@format: format of the things to be printed
 * Return: number of characters printed.
 */


int _printf(const char *format, ...)
{
	int i, k;
	va_list pams;
	int (*func)(va_list);

	va_start(pams, format);

	i = 0;
	k = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				func = sel_func(format[i + 2]);
			if (format [i + 1] != ' ')
		func = sel_func(format[i + 1]);

		if (func != NULL )
		{
		k += func(pams);

		}
		if (func == NULL )
		{
		k += _putchar2(format[i]);
		if (format[i + 1] != '%')
		k += _putchar2(format[i + 1]);

		}
		if( format[i + 1] == ' ')
			i += 3;
		else
			i += 2;
	}
		k += _putchar2(format[i]);
		i++;
	}
	va_end(pams);
	return (k);
}
