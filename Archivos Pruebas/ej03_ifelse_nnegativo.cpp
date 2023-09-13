#include <iostream>
// Ejemplo de condición doble
int main()
{
    int y;
    std :: cout << "Ingrese un numero entero: ";
    std :: cin >> y;
    if (y<0)
    {
        std :: cout << y << " es numero negativo\n";
    }
    else
    {
        std :: cout << y << " es numero positivo";
    }
    return 0;
}
