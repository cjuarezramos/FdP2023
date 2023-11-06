#include <iostream>
#include <cmath>

using namespace std;

// Declarar funciones
float cal_interes_efectivo(float i)
{
    float ief;
    ief = pow((1 + i), 12) - 1;
    return ief;
}
float calc_factor_incremento(float tasa, int m)
{
    float fact;
    fact = pow((1 + tasa), m);
    return fact;
}
float calc_sbr(float IBC_C, float IBC_D, float IPCr, float IPCi, int n, int t, int w)
{
    float Fi;

    Fi = IPCr / IPCi;
    float suma1;
    suma1 = 0;
    for (int i = 1; i <= (t - w); i++)
    {
        suma1 = suma1 + (IBC_C * Fi) / 8.75;
    }
    float suma2;
    suma2 = 0;
    for (int i = (t - w + 1); i <= t; i++)
    {
        suma2 = suma2 + (IBC_D * Fi);
    }

    float sbr;

    sbr = (suma1 + suma2) / n;
    return sbr;
}

int main()
{
    // variables
    int opc;
    float sbr;
    float IPCr,IPCi,IBC_C,IBC_D,pension,factorincremento;
    int n, t, w, m,n_cotizados;
    do
    {
        // menu
        cout << "Elija una de las siguientes opciones \n";
        cout << "\t1. Pension optados\n\t2. Pension SPP\n\t3. Pension AFP\n";
        cout << "\t4. Salir";
        cout << "su opcion es: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
        {
            sbr = calc_sbr(IBC_C,IBC_D,IPCr,IPCi,n,t,w);
            factorincremento = calc_factor_incremento(1/100,(n_cotizados-10));
            pension = 0.35*sbr*factorincremento;
            if ((pension > 0.55*sbr)&&(pension<2000))
            {
                pension = 0.55*sbr;
            }
            else if (pension>2000)
            {
                pension = 2000;
            }
            

            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
        }
        }
    } while (opc != 4);

    return 0;
}
