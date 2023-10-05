#include <iostream>
using namespace std;

int main()
{
    int fact = 1, n = 0;
    cout << "ingrese numero entero positivo: ";
    cin >> n;
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
    }
    if (n>=0)
    {
        cout << "factorial de " << n << " es " << fact << "\n";
    }
}
