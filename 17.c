#include <stdio.h>
#include <stdlib.h>

int neprim[1000011];
void p17();
void Eratostene(int n);
int este_relativ_prim(int x,int n);

int main()
{
    p17();
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


int este_relativ_prim(int x,int n)
{
    /// verificam daca x este relativ prim cu n
    /// euclid
    int r = 1;
    while(x)
    {
        r = n%x;
        n = x;
        x = r;
    }

    return n == 1;
}

void p17()
{

    // gasim toate numerele prime
    Eratostene(20000);

    /*
     Cautam prin numerele mai mici decat n primele
    10 numere care satisfac cerinta.
    */


    //// 3 4 6 8 12 18 24 30
    // nu exista mai mult de 8 astfel de numere.

    int nr = 8;
    for(int i=3;nr > 0;i++)
    {
        int ok = 1;
        for(int j=2;j<i;j++)
            if(este_relativ_prim(j,i) && neprim[j])
                ok = 0;

        if(ok)
        {
            printf("%d ",i);
            nr--;
        }
    }
}
