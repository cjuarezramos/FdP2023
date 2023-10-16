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
float ISSS(float sal_n)
{
    float desc_isss;
    if (sal_n<1000)
    {
        desc_isss = sal_n * 3/100;
    }
    else
    {
        desc_isss = 30;
    }
    return desc_isss;
}

float RENTA(float sal_d)
{
    float desc_renta,excedente;
    if (sal_d<=472.00)
    {
        desc_renta = 0;
    }
    else if (sal_d>=472.01 && sal_d<=895.24)
    {
        excedente = sal_d - 472.00;
        desc_renta = excedente*10/100 + 17.67;
    }
    else if (sal_d>=895.25 && sal_d<=2038.10)
    {
        excedente = sal_d - 895.24;
        desc_renta = excedente*20/100 + 60.00;
    }
    else
    {
        excedente = sal_d -2038.10;
        desc_renta = excedente*30/100 + 288.57;
    }
    return desc_renta;
}

// Programa principal: Salario liquido
int main()
{
    float salario_n, salario_l,d_renta,d_isss,d_afp;
    cout << "ingrese el salario nominal: ";
    cin >> salario_n;
    d_afp = AFP(salario_n);
    printf("Su salario nominal:  $ %8.2f\n",salario_n);
    printf("Descuento por AFP:   $ %8.2f\n",d_afp);

    d_isss = ISSS(salario_n);
    printf("Descuento por ISSS:  $ %8.2f\n",d_isss);

    d_renta = RENTA(salario_n-d_isss-d_afp);
    printf("Descuento por renta: $ %8.2f\n",d_renta);
    printf("\nDescuentos Totales:$ %8.2f\n",d_afp+d_isss+d_renta);
    printf("Salario liquido:   $ %8.2f\n",salario_n-d_renta-d_isss-d_afp);

    return 0;
}