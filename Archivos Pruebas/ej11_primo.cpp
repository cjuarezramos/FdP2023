#include <iostream>
using namespace std;
int main (){
    int n=0, modulo = 0, i = 0;
    cout << "ingrese un número: ";
    cin >> n;
    for (i = n-1;i>=2;i=i-1)
    {
        cout << i;
        modulo = n % i;
        if (modulo==0)
        {
            cout << "no es primo" << i;
            

            break;
        }
    }
    if (i==2)
    {
        cout << "es primo";
    }
    return 0;
}