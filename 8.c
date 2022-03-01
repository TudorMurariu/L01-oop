#include <stdio.h>
#include <stdlib.h>

void p8();
int exponent();

int main()
{
    p8();
    return 0;
}

int exponent(int n,int p)
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

        if(d == p)
            return nr;
        d++;
    }
}

void p8()
{
    ///Tipareste exponentul la care numarul prim p apare in descompunerea
    ///in factori primi a numarului N = 1*2*...*n (n natural nenul dat).
    int p,n;
    printf("p = ");
    scanf("%d", &p);
    printf("n = ");
    scanf("%d", &n);

    if(n%p != 0)
    {
        printf("0");
        return;
    }

    int exp = exponent(n,p);
    printf("%d",exp);
}
