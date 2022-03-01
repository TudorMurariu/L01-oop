#include <stdio.h>
#include <stdlib.h>

void p9();
int min(a,b);

int main()
{
    p9();
    return 0;
}

int min(a,b)
{
    if(b < a)
        return b;
    return a;
}


///Citeste un sir de numere naturale nenule terminat cu 0 si determina
///numarul cifrelor 0 in care se termina numarul produs al numerelor citite.
void p9()
{
    int n,nr2 = 0,nr5 = 0;

    do
    {
        scanf("%d",&n);
        while(n%2==0 && n!=0)
        {
            nr2++;
            n /= 2;
        }

        while(n%5==0 && n!=0)
        {
            nr5++;
            n /= 5;
        }


    }while(n);


    printf("%d", min(nr2,nr5));
}
