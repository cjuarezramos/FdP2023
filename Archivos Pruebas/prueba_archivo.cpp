#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    char filename[] = "example.txt";
    fstream file(filename,fstream::app);
    if (file.is_open())
    {
        file << "agregar linea nueva" << endl;
        file.close();
    }
    else 
    {
        cout << "no se puede abrir archivo" << endl;
    }
    return 0;
}
