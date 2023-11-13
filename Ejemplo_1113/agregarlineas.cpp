#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    fstream miarchivo("ejemplo1311.txt", fstream::app);
    if (miarchivo.is_open())
    {
        miarchivo << "Linea # 3\n";
        miarchivo.close();
    }
    else
    {
        cout << "NO puedo abrir el archivo\n";
    }
    return 0;
}