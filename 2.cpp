#include <iostream>
using namespace std;

int neprim[100000];
void p2();
void Eratostene();

int main()
{
    p2();
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

void p2()
{
    /// Genereaza primele n (n natural dat) numere prime.
    int n;
    cin >> n;
    Eratostene(10000);
    int nr = 0,i;
    for (i=2;nr != n;i++)
        if(!neprim[i])
            nr++;
    cout << i-1;
}
