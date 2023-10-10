#include <iostream>
#include <cmath>
using namespace std;

int factorial (int n)
{
    int fact = 1;
    if ((n == 0) || (n == 1))
    {
        fact = 1;
    }
    else if (n > 0)
    {
        fact = 1;
        for (int i = n; i > 1; i--)
        {
            fact = fact * i;
        }
    }
    else
    {
        cout << "Error\n";
        fact = -1;
    }
    return fact;
}

int main()
{
    float x, sum, res;
    int N;
    cout << "ingrese un numero: ";
    cin >> x;
    cout << "Ingrese valor N sumatoria: ";
    cin >> N;
    sum = 0;
    for (int n=0; n<=N; n++)
    {
        sum = sum + pow(x,n)/factorial(n);
    }
    cout << "exp(" << x <<") = " << sum << "\n";
    return 0;
}