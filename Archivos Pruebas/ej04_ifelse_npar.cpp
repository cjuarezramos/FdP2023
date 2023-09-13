#include <iostream>

int main()
{
    int n;
    std :: cout << "Ingrese un numero entero: ";
    std :: cin >> n;
    if (n % 2 == 0)
    {
        std :: cout << n << " es numero par\n";
    }
    else
    {
        std :: cout << n << " es numero impar\n";
    }
    return 0;
}