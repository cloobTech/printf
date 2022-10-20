#include "main.h"

int hex0(va_list pams)
{
	int n = va_arg(pams, int);

	return (hex2(n));

}


int hex(va_list pams)
{
	int n = va_arg(pams, int);

	return (hex1(n));

}


int hex1(int a)
{
	unsigned int k;
	char arr[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

	k = a;
	if (k > 15)
	hex1(k / 16);
	_putchar2(arr[k % 16]);
	return (count_hex(k));
}


int hex2(int a)
{
	unsigned int k;
	char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	k = a;
	if (k > 15)
	hex2(k / 16);
	_putchar2(arr[k % 16]);
	return (count_hex(k));
}


int count_hex(unsigned int n)
{
	if (n > 15)
	return (1 + count_hex(n / 16));
	return (1);
}

