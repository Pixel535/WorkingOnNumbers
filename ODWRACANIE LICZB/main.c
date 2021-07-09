#include <stdio.h>
#include <stdlib.h>

void zad5()
{
    char n[50];
    char on[50];
    printf("podaj max 4 cyfrowa liczbe: ");
    scanf("%s", &n);
    strcpy(on,n);
    strrev(on);
    if (strcmp(n,on) == 0)
    {
        printf("%s", n);
        return 1;
    }
    else
    {
        printf("%s", on);
        return 0;
    }
}


int main()
{
    zad5();
}
