#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream datafile("ejemplo.txt");
    if (datafile.is_open())
    {
        datafile << "Probando escribir datos: \n";
        datafile << "Dato 1     10\n";
        datafile << "Dato 2     5\n";
        datafile.close();
    }
    
    
    return 0;
}