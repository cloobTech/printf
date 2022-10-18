#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - prints a char from va_list argumnent
 *@pams: the va_list argument
 * Return: 1;
 */

int _putchar(va_list pams)
{
char c = va_arg(pams, int);
	write(1, &c, 1);
	return (1);
}

/**
 * prntstr - prints a string from va_list argument
 *@pams: the va_list argument
 * Return: number of digits printed
 */

int prntstr(va_list pams)
{
	char *s = va_arg(pams, char *);
	int i;

	if (s == NULL)
	s = "(null)";

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

/**
 * _putchar2 - prints a character
 *@c: the character to be printed
 * Return: 1
 */

int _putchar2(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * prntoct - prints a number from va_list in octal
 *@pams: the va_list containing the number:
 * Return: the number of digits printed.
 */

int prntoct(va_list pams)
{
	int a = va_arg(pams, int);

	return (prntoct1(a));
}

