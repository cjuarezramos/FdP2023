#include <iostream>

using namespace std;

int main()
{
    int res , n;
    cout << "Ingrese número entero: ";
    cin >> n;
    res = n % 2;
    switch (res)
    {
        case 1:
        cout << n << " es impar\n";
        break;
        case 0:
        cout << n << " es par\n";
        break;
        default:
        cout << "Datos incorrectos\n";
        
        
    }
    return 0;
}
