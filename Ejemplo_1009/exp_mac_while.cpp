#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int factorial_n(int n)
{
    int fact = 1;
    if (n==0 || n==1) {fact = 1;}
    else if (n>0)
    fact = 1;
    for (int i = 1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    float tol=1e-5,error = 2,valor_nuevo=0,valor_viejo=0;
    float x = 1;
    int n=0;
    valor_nuevo = 0;
    n = 0;
    while(error>tol)
    {
        
        valor_viejo = valor_nuevo;
        valor_nuevo = valor_nuevo + pow(x,n)/factorial_n(n);
        error = abs(valor_nuevo-valor_viejo);
        n++;

    }
    cout << "e("<<x<<") = " << valor_nuevo << "\n";
}
