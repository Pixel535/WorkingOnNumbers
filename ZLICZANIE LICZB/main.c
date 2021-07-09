#include <stdio.h>
#include <stdlib.h>

int zad4(int  i, int a, int b, int s, int u, int d)
{
    while((s < a) && (u < b))
    {
        printf("podaj cyfre: ");
        scanf("%d", &d);
        if(d<0)
        {
            u = u+1;
        }
        s = s+d;
        i = i+1;
    }
    if(s>=a)
    {
        printf("Suma: %d", s);
        printf("\nIlosc liczb: %d", i);
        return 1;
    }
    else if(u>=b)
    {
        printf("Suma: %d", s);
        printf("\nIlosc liczb: %d", i);
        return 0;
    }
}


int main()
{
    int i = 0;
    int a = 15;
    int b = 5;
    int s = 0;
    int u = 0;
    int d;
    zad4(i,a,b,s,u,d);
}
