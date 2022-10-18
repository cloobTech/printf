#include "main.h"
#include <stdio.h>
#include<stdarg.h>

int main(void)
{
int k1, k2, k3, k4, len, len2;
char t = 'X';
/*char a = 'A';
int n = 800;
char *s = NULL;
char *name = "JOSH";*/

len = _printf("Let's try to % c crintf a simple sentence.\n", t);
    len2 = printf("Let's try to % c crintf a simple sentence.\n", t);

k1 =	_printf("Length:[%d, %i]\n", len, len);
 k2 =   printf("Length:[%d, %i]\n", len2, len2);
  k3 =  _printf("Negative:[%d]\n", -762534);
   k4 = printf("Negative:[%d]\n", -762534);

_printf("%d %d %d %d\n", k1, k2, k3, k4);

printf("%d %d %d %d\n", k1, k2, k3, k4);
return(0);

}
