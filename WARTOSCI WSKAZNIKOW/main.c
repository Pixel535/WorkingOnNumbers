#include <stdio.h>
#include <stdlib.h>


    int main()
    {
        int a = 50;
        float b = 20.5;
        long int c = 5000000;
        double d = 0.5432;
        char e = 'c';

        int *wa;
        float *wb;
        long int *wc;
        double *wd;
        char *we;


        printf("Wartosc a: %d\n", a);
        printf("Wartosc b: %f\n", b);
        printf("Wartosc c: %d\n", c);
        printf("Wartosc d: %lf\n", d);
        printf("Wartosc e: %c\n", e);

        wa = &a;
        *wa = 60;

        wb = &b;
        *wb = 10.45;

        wc = &c;
        *wc = 99999999;

        wd = &d;
        *wd = 0.00001;

        we = &e;
        *we = 'd';

        printf("Wartosc wskaznika a: %d\n", *wa);
        printf("Wartosc wskaznika b: %f\n", *wb);
        printf("Wartosc wskaznika c: %d\n", *wc);
        printf("Wartosc wskaznika d: %lf\n", *wd);
        printf("Wartosc wskaznika e: %c\n", *we);

        printf("Wartosc a po wskazniku: %d\n", a);
        printf("Wartosc b po wskazniku: %f\n", b);
        printf("Wartosc c po wskazniku: %d\n", c);
        printf("Wartosc d po wskazniku: %lf\n", d);
        printf("Wartosc e po wskazniku: %c\n", e);

        return 0;
    }
