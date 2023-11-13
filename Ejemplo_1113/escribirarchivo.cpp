#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream miarchivo("ejemplo1311.txt");
    if (miarchivo.is_open())
    {
        miarchivo << "Linea # 1 \n";
        miarchivo << "Linea # 2 \n";
        miarchivo.close();
    }
    else
    {
        cout << "no es posible abrir el archivo";
    }
    return 0;
}