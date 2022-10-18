#include "main.h"
#include <stdio.h>

int main(void)
{
int k;
char a = 'A';
int n = 800;
char *s = NULL;
char *name = "JOSH";

k = _printf("My name.is %s, I love having grade %c in maths, 100%% my credit score is probably more than %d, but i'd say not %s\n", name, a, n, s);
_printf("%d\n", k);

k = printf("My name.is %s, I love having grade %c in maths, 100%% my credit score is probably more than %d, but i'd say not %s\n", name, a, n, s);
printf("%d\n", k);
return(0);

}
