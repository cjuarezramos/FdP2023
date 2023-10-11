#include <iostream>
#include <stdio.h>
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
    printf("Su salario nominal:$ %8.2f\n",salario_n);
    printf("Descuento por AFP: $ %8.2f\n",d_afp);



    return 0;
}