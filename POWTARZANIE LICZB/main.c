#include <stdio.h>
#include <stdlib.h>


int porownanie(int a, int b, int c)
{
    int liczby[3] = {a,b,c};

    if((a == b) && (a == c) && (b == c))
    {
        printf("Liczby powtarzajace sie to : %d\n", a);
        return 1;
    }
    else if ((a == b) || (a == c) || (b == c))
   {
       for(int i = 0; i<3; i++)
        {
       for(int j = i+1; j < 3; j++)
            {
           if(liczby[i] == liczby[j])
           {
               printf("Liczby powtarzajace sie to : %d\n", liczby[i]);
           }
            }
        }
    return 1;
   }
   else
   {
       printf("brak powtarzajacych sie liczb\n");
       return 0;
   }
}



int main()
{
   int a,b,c;
   printf("Podaj a: ");
   scanf("%d", &a);
   printf("Podaj b: ");
   scanf("%d", &b);
   printf("Podaj c: ");
   scanf("%d", &c);
   printf("\n");
   porownanie(a,b,c);


}
