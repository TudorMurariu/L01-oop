#include <stdio.h>
#include <stdlib.h>

int neprim[10000];
void p1();
void Eratostene();

int main()
{
    p1();
    return 0;
}

void Eratostene(int n)
{
    for(int i=2;i<n;i++)
    {
        if(!neprim[i])
            for(int d=i*i;d<n;d+=i)
                neprim[d] = 1;
    }
}

void p1()
{
    /// 1. Genereaza numere prime mai mici decat un numar natural dat.
    int n;
    scanf("%d", &n);
    Eratostene(n);
    for(int i=2;i<n;i++)
    {
        if(!neprim[i])
            printf("%d\n",i);
    }
}
