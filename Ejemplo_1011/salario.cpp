#include <iostream>
using namespace std;

// Primero van las funciones
float AFP(float sal_n)
{
    float desc_afp; // variables de salida
    desc_afp = sal_n * 7.25 / 100;
    return desc_afp;
}

// Programa principal: Salario liquido
int main()
{
    float salario_n, salario_l,d_renta,d_isss,d_afp;
    cout << "ingrese el salario nominal: ";
    cin >> salario_n;
    d_afp = AFP(salario_n);

    cout << "Su salario nominal es:   $" << salario_n << "\n";
    cout << "Su descuento por AFP es: $" << d_afp << "\n";


    return 0;
}