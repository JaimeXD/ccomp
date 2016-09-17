#include <stdio.h>
#include <stdlib.h>
/* Escriba una función lower, la cual convierte letras mayusculas a minusculas usando una condicional. No usar if-else.*/

int lower(char s[])
{
    s=s+32;
    return s;
}
main()
{
    char z;
    char x;
    z=getchar();
    x=lower(z);
    printf("%c",x);
}

