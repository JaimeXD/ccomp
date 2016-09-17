#include <stdio.h>
#include <stdlib.h>
/*Escriba una función strindex(s, t), la cual retorne la posición de la ocurrencia mas a la derecha de t en s. Retorne -1 si no la encuentra.*/

int strindex(char s[],char t)
{
    int w=0;
    int i;
    for (i=0;s[i]!='\0';++i)
        if (s[i]==t)
            w=i;
    if (w==0)
        return -1;
    return w;
}
main()
{
    char s[]="ocola";
    char t=getchar();
    printf("%d",strindex(s,t));
}

