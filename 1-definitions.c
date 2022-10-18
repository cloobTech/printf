#include "main.h"
#include <stddef.h>
/**
 * sel_func - chooses the right function to call
 *@c: symbol of the format specifier
 * Return: pointer to the chosen function.
 */

int (*sel_func(char c))(va_list pams)

{

	int i;

	fa k[] = { {'s', prntstr}, {'c', _putchar},
		{'b', prntbnry}, {'d', _prntnum},
		{'o', prntoct}, {'i', _prntnum}
	};
	i = 0;
	while (i < 6)
	{
		if (k[i].t == c)
			return (k[i].fp);
		i++;
	}
	return (NULL);
}

/**
 * countoct - counts the number of digits in a octal number
 *@n: decimal number passed.
 * Return: number of digits.
 */

int countoct(unsigned int n)
{
	if (n > 7)
	return (1 + countoct(n / 8));
	return (1);
}


/**
 * count_digits - counts the number of digits in a number
 *@n: the number whose digits are to be counted
 * Return: number of digits
 */

int count_digits(unsigned int n)
{

	if (n > 9)
	return (1 + count_digits(n / 10));
	return (1);
}

/**
 * countbnry - counts the number of digits in a binary number
 *@n: the decimal number whose digits in binary are to be counted
 * Return: number of digits.
 */

int countbnry(unsigned int n)
{
	if (n > 1)
	return (1 + countbnry(n / 2));
	return (1);
}
