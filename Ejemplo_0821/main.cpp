#include <iostream> // libreria para entradas & salidas de informacion
using namespace std;

int main()
{
    // Declaracion de variables
    int vida_util;
    float costo_original;
    float valor_recuperacion;
    int anio_compra;
    int i, anio;
    float Depreciacion, Dep_acumulada, valor_anual;

    // Entradas
    std ::cout << "Ingrese el anio de compra: ";
    std ::cin >> anio_compra;
    std ::cout << "Valor original de la compra: ";
    std ::cin >> costo_original;
    std ::cout << "Valor de recuperacion ";
    std ::cin >> valor_recuperacion;
    std ::cout << "Vida util: ";
    std ::cin >> vida_util;

    Depreciacion = (costo_original - valor_recuperacion) / vida_util;

    cout << "Anio   Depreciacion    Depreciacion acumulada  Valor anual\n";

    valor_anual = costo_original;
    Dep_acumulada = 0;
    anio = anio_compra;
    i = 0;

    cout << anio << "   \t" << Depreciacion << "\t\t\t" << Dep_acumulada << "\t\t\t" << valor_anual << "\n";

    for (i; i < vida_util; i++)
    {
        anio = anio + 1;
        Dep_acumulada = Dep_acumulada + Depreciacion;
        valor_anual = costo_original - Dep_acumulada;
        cout << anio << "   \t" << Depreciacion << "\t\t" << Dep_acumulada << "\t\t\t" << valor_anual << "\n";

    }

    return 0;
}
