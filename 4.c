#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void p4();
void getstring(char s[],int n);

int main()
{
    p4();
    return 0;
}

void getstring(char *s,int n)
{
    s[0] = '%';
    s[1] = '.';
    int v[10],l = 0,i = 2;
    while(n)
    {
        v[l] = n%10;
        l++;
        n /= 10;
    }

    while(l)
    {
        l--;
        s[i] = '0' + v[l];
        i++;
    }

    s[i] = 'f';
    s[i+1] = '\0';
}

void p4()
{
    //Determina primele n cifre din scrierea fractiei subunitare
    // k/m = 0.c1c2c3..., pentru k si m numere naturale date.
    int n,k,m;
    printf("n =  ");
    scanf("%d",&n);
    printf("k =  ");
    scanf("%d",&k);
    printf("m =  ");
    scanf("%d",&m);

    float x = (1.0 * k) / m;
    char s[50];

    getstring(s,n);
    printf(s,x);
}
