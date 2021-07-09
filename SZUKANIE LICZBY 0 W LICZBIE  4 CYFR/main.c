#include <stdio.h>
#include <stdlib.h>

int  zero(int n, int n1, int n2, int n3, int n4, int u)
{

    n1=n/1000;
    n2=(n-n1*1000)/100;
    n3=(n-n1*1000-n2*100)/10;
    n4=(n-n1*1000-n2*100-n3*10);

        if((n1 != 0))
        {
            u++;
        }
        if((n2 != 0))
        {
            u++;
        }
        if((n3 != 0))
        {
            u++;
        }
        if((n4 != 0))
        {
            u++;
        }


        if(u>=2)
        {
            printf("Cyfra zawiera co najmniej 2 cyfry rozne od 0 a dokladnie ma ich %d", u);
            return 1;
        }
        else if(u<2)
        {
            printf("Cyfra zawiera  %d  liczb roznych od 0", u);
            return 0;
        }
        else if(u = 0)
        {
            printf("Cyfra zawiera %d liczb roznych od  0", u);
            return 0;
        }
}


int main()
{
    int n;
    int n1,n2,n3,n4;
    int u = 0;
    printf("podaj max 4 cyfrowa liczbe: ");
    scanf("%d", &n);

    zero(n,n1,n2,n3,n4,u);
}
