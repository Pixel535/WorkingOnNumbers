#include <stdio.h>
#include <stdlib.h>

int podzielnosc(int *wa, int *wb, int *wk, int *wn, int *wd)
{
   printf("Podaj przedzial od a do b: ");
   scanf("%d %d", &*wa, &*wb);
   printf("Podany przedzial wynosi <%d,%d>\n", *wa, *wb);
   printf("Podaj k przez ktore maja sie dzielic liczby: ");
   scanf("%d", &*wk);

   *wn = *wb-*wa+1;
   int zbior[*wn];

   for(int i = 0; i < *wn; i++)
   {
        zbior[i] = *wa;
        *wa = *wa+1;
   }

       for(int i = 0; i<*wn; i++)
        {
            if((zbior[i] % *wk == 0))
            *wd = *wd+1;
        }
    printf("Liczb podzielnych przez k w tym zbiorze jest: %d", *wd);
    return 0;
}


int main()
{
   int a,b,k,n;
   int d = 0;
   int *wa;
   int *wb;
   int *wk;
   int *wn;
   int *wd;

   wa = &a;
   wb = &b;
   wk = &k;
   wn = &n;
   wd = &d;
   podzielnosc(wa, wb, wk, wn, wd);
}
