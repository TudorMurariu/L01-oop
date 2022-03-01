#include <stdio.h>
#include <stdlib.h>

void p6();
void Combinari(int n);

int main()
{
    p6();
    return 0;
}

void Combinari(int n)
{
    /// calculam si afisam combinarile
    int v[1001] = {0};
    v[0] = 1;
    printf("%d\n",v[0]);
    for(int i=1;i<n;i++)
    {
        v[i] = 1;
        for(int j=i-1;j>0;j--)
            v[j] = v[j-1] + v[j];
        for(int j=0;j<=i;j++)
            printf("%d ",v[j]);
        printf("\n");
    }
}

void p6()
{
    /// citim m
    int m;
    scanf("%d",&m);
    Combinari(m);
}
