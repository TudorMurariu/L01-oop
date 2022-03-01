#include <stdio.h>
#include <stdlib.h>

void p7();
double aprox_rad(int n,double precizie);

int main()
{
    p7();
    return 0;
}

double aprox_rad(int n,double precizie)
{
    /// aproximam radicalul folosind cautarea binara
    double st = 0,dr = n;
    while(st <= dr)
    {
        double mid = (st + dr)/2;
        if(abs(mid * mid - n) < precizie)
            return mid;
        else if(mid * mid > n)
            dr = mid - precizie;
        else
            st = mid + precizie;
    }
    return st;
}

void p7()
{
    int n;
    double precizie;
    scanf("%d" , &n);
    scanf("%f" , &precizie);
    printf("%f" , aprox_rad(n,precizie));
}
