#include <iostream>
#include <cmath>

int main()
{
    float a,b,c,x1,x2,r;

    std :: cout << "El programa resuelve las raices de ax^2+bx+c=0\n";
    std :: cout << "Ingrese a= ";
    std :: cin >> a;
    std :: cout << "Ingrese b= ";
    std :: cin >> b;
    std :: cout << "Ingrese c= ";
    std :: cin >> c;

    if (a != 0)
    {
        r = pow(b,2)-4*a*c;
        if (r >= 0)
        {
            x1 = (-b+sqrt(r))/2/a;
            x2 = (-b-sqrt(r))/2/a;
            std :: cout << "Las raices de la ecuacion son: \nx1= " << x1 <<"\nx2= " << x2 << "\n";
        }
        else
        {
            std :: cout << "Las raices son numeros complejos, no puedo resolver\n";
        }
    }
    else if (b != 0)
    {
        std :: cout << "La ecuacion es lineal, tiene una raiz\n";
        x1 = -c/b;
        std :: cout << "La raiz es: " << x1 << "\n";
    }
    else
    {
        std :: cout << "Datos ingresado son erreos";
    }
    return 0;
}