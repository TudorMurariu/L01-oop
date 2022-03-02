#include <stdio.h>
#include <stdlib.h>

void p16();
int este_relativ_prim(int x,int n);

int main()
{
    p16();
    return 0;
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

void p16()
{
    // citim n
    int n;
    scanf("%d",&n);

    // verificam toate numerele mai mici decat n
    for(int i=2;i<n;i++)
        if(este_relativ_prim(i,n))
            printf("%d ",i);
}
