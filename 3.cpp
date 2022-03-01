#include <iostream>
using namespace std;

int v[300],k;
void p3();
void Back();

int main()
{
    p3();
    return 0;
}

void Back(int n)
{
    if(n == 0)
    {
        for (int i=0;i<k;i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else if(n > 0)
    {
        if(k == 0)
            for(int i=1;i<n-1;i++)
            {
                v[k++] = i;
                Back(n-i);
                k--;
            }
        else
        {
            v[k] = v[k-1] + 1;
            k++;
            Back(n-v[k-1]);
            k--;
        }
    }
}

void p3()
{
    // Determina toate reprezentarile posibile a unui numar natural ca suma
    // de numere naturale consecutive.
    int n;
    cin >> n;
    k = 0;
    Back(n);
}
