#include<iostream>
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
    int n, sal;
    cout << "ingrese un numero entero positivo: ";
    cin >> n;
    sal = factorial(n);


    if (sal!=-1)
    {
        cout << "el factorial de " << n << " es " << sal << "\n";
    }
    return 0;

}