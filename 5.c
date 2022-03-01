#include <stdio.h>
#include <stdlib.h>

void p5();
int get_sir(int nr);
int is_prime(int n);

int main()
{
    p5();
    return 0;
}

int is_prime(int n)
{
    /// verifica daca n e prim
    if(n < 2)
        return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int get_sir(int nr)
{
    /// gaseste al n-ulea numar din sir
    int x = 1;
    while(nr)
    {
        if(is_prime(x))
        {
            for(int i=x;i>=1;i--)
            {
                //printf("%d ",i);
                nr--;
                if(nr == 0)
                    return i;
            }
        }
        else
        {
            //printf("%d ",x);
            nr--;
            if(nr == 0)
                return x;

            int c = x,d = 2;
            while(c != 1)
            {
                while(c % d == 0)
                {
                    nr--;
                    //printf("%d ",d);
                    if(nr == 0)
                        return d;
                    c /= d;
                }
                d++;
            }
        }
        x++;
        //printf("\n");
    }

    return x;
}

void p5()
{
    int n;
    scanf("%d",&n);
    int x = get_sir(n);
    printf("\n%d",x);
}
