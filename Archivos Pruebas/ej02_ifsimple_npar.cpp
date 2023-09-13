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
    return 0;
}