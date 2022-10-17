#include "main.h"


/* Print number */
int count_digits(int n);
int _prntnum(int n)
{
	int k;
	if (n > 9)
	_prntnum(n / 10);
	_putchar((n % 10) + '0');
	return (count_digits(n));
}

int count_digits (int n)
{
	int k;
	if (n > 9)
	return (1 + count_digits(n / 10));
	return((sizeof(n % 10))/(sizeof(int)));
}

int main(void)
{

int x;

x = _prntnum(43906);
_putchar('\n');
_putchar(x + '0');
_putchar('\n');
	return (0);
}
