#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "printf.c"

int main(void)
{
	int k;
	char grade;
	char *name;

	name = "JOSHUA";
	grade = 'A';

	k = _printf("My name is %s, and I have %c in maths -  100%%\n", name, grade);
	printf("%d\n", k);
	return (0);
}
