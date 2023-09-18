#include <iostream>
#include <cmath>

int main()
{
    // declarando variables
    float n, res;
    std :: cout << "Ingrese un número: ";
    std :: cin >> n;

    if (n < 0)
    {
        std::cout <<"La raíz es imaginaria\n";
    }
    else 
    {
        res = sqrt(n);
        std :: cout << "La raiz de: "<< n << "es: " << res << "\n";
    }

}