#include "main.h"


/* Print number */
int _prntnum(int n)
{
	int k;
	k = 0;

	if (n > 9)
		_prntnum(n / 10);
	_putchar((n % 10) + '0');
	k++;
	return (k);
}

int main(void)
{

int x;

x = _prntnum(8878906);
_putchar('\n');
_putchar(x + '0');
_putchar('\n');
	return (0);
}
