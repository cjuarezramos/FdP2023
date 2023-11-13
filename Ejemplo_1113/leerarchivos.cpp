#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string linea;
    ifstream miarchivo("ejemplo1311.txt");
    if (miarchivo.is_open())
    {
        while (getline (miarchivo,linea))
        {
            cout << linea << "\n";
        }
        miarchivo.close();
    }
    else
    {
        cout << "imposible abrir el archivo \n";
    }
    return 0;
}