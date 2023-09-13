#include <iostream>

int main()
{
    int y;
    std :: cout << "ingrese un numero entero: ";
    std :: cin >> y;

    if (y == 0)
    {
        std :: cout << "numero ingresado es cero\n";
    }
    else if (y < 0)
    {
        std :: cout << y << " es negativo\n";
    }
    else
    {
        std :: cout << y << " es postivo\n";
    }
    return 0;
}