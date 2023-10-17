#include <iostream>
#include <cmath>

using namespace std;
// funciones
// funcion suma
float suma(float a, float b)
{
    float res;
    res = a + b;
    return res;
}
float resta(float a, float b)
{
    float res;
    res = a - b;
    return res;
}
float multiplicar(float a, float b)
{
    float res;
    res = a * b;
    return res;
}
float dividir(float a, float b)
{
    float res;
    res = a / b;
    return res;
}
int modulo(int a, int b)
{
    float res;
    res = a % b;
    return res;
}
string primos(int n)
{
    int modulo, i;
    string salida = "es primo";
    for (i = n - 1; i >= 1; i = i - 1)
    {
        modulo = n % i;
        if (modulo == 0)
        {
            salida = "no es primo";
            break;
        }
    }
    if (i == 1)
    {
        salida = "es primo";
    }
    return salida;
}
int factorial_n(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
    {
        fact = 1;
    }
    else if (n > 0)
        fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
double exponencial(float x)
{
    double res;
    double tol = 1e-5, error = 2, valor_nuevo = 0, valor_viejo = 0;
    int n = 0;
    valor_nuevo = 0;
    n = 0;
    while (error > tol)
    {
        valor_viejo = valor_nuevo;
        valor_nuevo = valor_nuevo + pow(x, n) / factorial_n(n);
        error = abs(valor_nuevo - valor_viejo);
        n++;
    }
    res =  valor_nuevo;
    return res;    
}
int main(int argc, char **argv)
{
    int opc;
    float x1, x2, res;

    cout << "ingrese numero: ";
    cin >> x1;
    cout << "ingrese otro numero: ";
    cin >> x2;
    cout << "\nElija una opcion:\n\t1.Sumar\n\t2.Restar\n\t3.Multiplicar";
    cout << "\n\t4.Dividir\n\t5.Modulo\n\t6.Factorial\n\t7.primo\n\t8.Exponencial\n";
    cout << "Su opcion es: ";
    cin >> opc;
    switch (opc)
    {
    case 1:
        res = suma(x1, x2);
        cout << "El resultado de " << x1 << " + " << x2 << " = " << res << "\n";
        break;
    case 2:
    {
        res = resta(x1, x2);
        cout << "El resultado de " << x1 << " - " << x2 << " = " << res << "\n";
        break;
    }
    case 3:
    {
        res = multiplicar(x1, x2);
        cout << "El resultado de " << x1 << " * " << x2 << " = " << res << "\n";
        break;
    }
    case 4:
    {
        res = dividir(x1, x2);
        cout << "El resultado de " << x1 << " / " << x2 << " = " << res << "\n";
        break;
    }
    case 5:
    {
        res = modulo(x1, x2);
        cout << "El resultado de " << x1 << " % " << x2 << " = " << res << "\n";
        break;
    }
    case 6:
        int sal1, sal2;
        int y1, y2;
        y1 = static_cast<int>(x1);
        y2 = static_cast<int>(x2);
        sal1 = factorial_n(y1);
        sal2 = factorial_n(y2);
        cout << "factorial de " << y1 << " es " << sal1 << "\n";
        cout << "factorial de " << y2 << " es " << sal2 << "\n";
        break;
    case 7:
    {
        string sal1, sal2;
        int y1, y2;
        y1 = static_cast<int>(x1);
        y2 = static_cast<int>(x2);
        sal1 = primos(y1);
        sal2 = primos(y2);

        cout << y1 << " " << sal1 << "\n";
        cout << y2 << " " << sal2 << "\n";
        break;
    }
    case 8:
    {
        double resultado = exponencial(x1);
        cout << resultado << "\n";
        break;
    }
    default:
        cout << "Opcion invalida!\n";
    }

    return 0;
}