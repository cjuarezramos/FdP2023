#include <iostream>
#include <iomanip>

int main()
{
    double multiplicando(0.0);
    double multiplicador(0.0);
    double piEntreDos(1.0);

    for (int contador(1); contador <= 900000; ++contador)
    {
        multiplicando = (2.0 * contador) / (2.0 * contador - 1.0);
        multiplicador = (2.0 * contador) / (2.0 * contador + 1.0);
        piEntreDos *= multiplicando * multiplicador;
    }

    std::cout << std::setprecision(7) << piEntreDos * 2 << std::endl;
    return 0;
}