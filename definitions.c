#include <unistd.h>

/* print character and return 1*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* Print String and return lenght*/
int _prntstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

/* Print number 
int _prntnum(int n)
{
	int k;

	if (n > 9)
		_prntnum(n / 10);
	_putchar((n % 10) + '0');
	k++;
	return (k);
}*/
