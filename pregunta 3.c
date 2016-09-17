#include <stdio.h>
#include <stdlib.h>
/*Escriba un programa que reciba un string de la forma "123.45e-6" y devuelva su correspondiete número.*/
int potencia(int x ,int y)
{
    int z;
    z=x;
    if (y==0)
        return 1;
    if (y!=1)
        z*=x;
        --y;
    return z;
}
int convertir(char s[])
{
    int b;
    int i;
    float n,a;
    n=0.0;
    a=0.0;
    for(i=0;s[i]!='.';++i) {
            n=10*n+(s[i]-'0');
    }
    ++i;
    for (;s[i]!='e';++i) {
            a=(10*a+(s[i]-'0'));
    }
    printf("%.2f",n+(a/potencia(10,2)));

    return 0;
}
main()
{
    char s[]="123.45e-6";
    printf(convertir(s));
}
