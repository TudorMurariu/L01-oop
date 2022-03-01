#include <stdio.h>
#include <stdlib.h>

void p10();
double calcul(int n,int x);

int main()
{
    p10();
    return 0;
}

double calcul(int n,int x)
{
    double s = 0;
    int x1 = x, f = 1;
    for(int i=1;i<=n;i++)
    {
        double new1 = (x1*1.0 / f);
        if(i%2)
            s += new1;
        else
            s -= new1;
        x1 = x1 * x * x;
        f = f * (2*i) * (2*i+1);
        //printf("%f\n",new1);
    }

    return s;
}

void p10()
{
    // Tipareste un numar precizat de sume partiale din dezvoltarea
    // sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
    int n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    double sin = calcul(n,x);
    printf("%f",sin);
}
