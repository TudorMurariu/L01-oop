#include <stdio.h>
#include <stdlib.h>

void p12();
int putere(int x,int n);

int main()
{
    p12();
    return 0;
}

int putere(int x,int n)
{
    /// calculeaza x la n in timp logaritmic
    int r = 1;
    while(n)
    {
        if(n % 2 == 1)
            r *= x;
        x = x*x;
        n /= 2;
    }
    return r;
}

void p12()
{
    // citim
    int n,x;
    printf("x = ");
    scanf("%d",&x);
    printf("n = ");
    scanf("%d",&n);

    // afisam
    printf("%d\n", putere(x,n));
}
