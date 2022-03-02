#include <stdio.h>
#include <stdlib.h>

int neprim[1000000];
void p14();
void Eratostene(int n);

int main()
{
    p14();
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

void p14()
{
    /// citim un numar n par
    int n;
    scanf("%d",&n);
    Eratostene(n);

    for(int i=2;i<n;i++)
        if(!neprim[i] && !neprim[n-i])
        {
            printf("%d + %d = %d",i,n-i,n);
            break;
        }
}
