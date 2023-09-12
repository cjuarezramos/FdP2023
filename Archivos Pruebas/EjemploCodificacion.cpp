#include <iostream>
// using namespace std;
int main(int argc, char **argv)
{
    // Declarando variables según el tipo de dato que deseamos ingresar.
    float costo, valor_rescate, depreciacion, dep_acum, val_act;
    int vida_util, anio_i, i, anio;
    // interacción con el usuario para ingresar datos desde consola
    std :: cout << "Introducir costo inicial: ";
    std :: cin >> costo;
    std :: cout << "Vida util: ";
    std :: cin >> vida_util;
    std :: cout << "Valor final de rescate: ";
    std :: cin >> valor_rescate;
    std :: cout << "Año de compra: ";
    std :: cin >> anio_i;

    // cálculo de la depreciación anual.
    depreciacion = (costo - valor_rescate) / vida_util;
    // variables utilizas en cálculo
    i = 0; anio = anio_i; val_act = costo; dep_acum = 0;
        
    // impresion de cabecera:
    std :: cout << "Anho    Depreciacion anual  Depreciacion acumulada  valor actual\n";
    // impresion de año inicial
    std :: cout << anio_i << "(0)" << "\t\t" << "0" << "\t\t" << dep_acum << "\t\t" << val_act << "\n";
  
    // calculo de los años posteriores a la compra.
    while (i < vida_util)
    {
        dep_acum = dep_acum + depreciacion;
        val_act = val_act - depreciacion;
        i = i + 1;
        anio = anio + 1;
        std :: cout << anio << "(" << i << ")" << "\t\t" << depreciacion << "\t\t" << dep_acum << "\t\t" << val_act << "\n";
    }

}
