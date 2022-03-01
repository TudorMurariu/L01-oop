#include <stdio.h>
#include <stdlib.h>

void p13();
void descompunere(int n);

int main()
{
    p13();
    return 0;
}

void descompunere(int n)
{
    int d = 2;
    while(n != 1)
    {
        int nr = 0;
        while(n % d == 0)
        {
            nr++;
            n /= d;
        }

        if(nr > 0)
            printf("%d de %d  ori\n",d,nr);

        d++;
    }
}

void p13()
{
    int n;
    scanf("%d",&n);
    descompunere(n);
}
