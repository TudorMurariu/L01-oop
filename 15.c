#include <stdio.h>
#include <stdlib.h>

int notprim[10000000];
void p15();
void Eratostene1(int n);

int main()
{
    p15();
    return 0;
}

void Eratostene1(int n)
{
    notprim[0] = notprim[1] = 1;
    for(int i = 2;i < n;i++)
        if(!notprim[i])
            for(int j=i*i;j<n;j+=i)
                notprim[j] = 1;

}

void p15()
{
    int n;
    scanf("%d",&n);
    Eratostene1(100);

    int i = 2;
    while(n > 0)
    {
        if(!notprim[i] && !notprim[i+2])
        {
            printf("%d si %d\n",i,i+2);
            n--;
        }
        i++;
    }
}
