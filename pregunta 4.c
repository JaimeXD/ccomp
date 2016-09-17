#include <stdio.h>
#include <stdlib.h>
/*Escriba una función recursiva que reciba un string y devuelva el string invertido (sin utilizar la libreria string.h.*/

int invertida(char s[],int i,int f)
{
    int a;
    if(i>=f)
        return s;
    else
        a=s[i];
        s[i]=s[f];
        s[f]=a;
        return invertida(s,++i,--f);
}
main()
{
    char s[]="hola mundo";
    int i=0;
    int f=9;
    printf("%s",invertida(s,i,f));
}

