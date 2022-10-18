#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(va_list pams);
int prntstr(va_list pams);
int _printf(const char *format, ...);
int _putchar2(char c);
int count_digits(unsigned int n);
int prntbnry(va_list pams);
int prntoct(va_list pams);
int _prntnum(va_list pams);
int countbnry(unsigned int n);
int countoct(unsigned int n);
int _prntnum1(int n);
int prntbnry1(int a);
int prntoct1(int a);

/**
 * struct func_array - array of functions and specifier symbols
 *@t: the specifier symbol
 *@fp: pointer to the appropriate function
 *
 */
struct func_array
{
	char t;
	int (*fp)(va_list pams);
};

typedef struct func_array fa;


#endif /*MAIN_H*/

#ifndef SELECT_H
#define SELECT_H
int (*sel_func(char c)) (va_list pams);
#endif
