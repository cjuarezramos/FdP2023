#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double notas_uv[4][2], CUM, sumUV, UM;
    string asignaturas[4];
    
    for (int i = 0; i<=3; i++)
    {
        cout << "Ingrese nombre de asignatura "<< i+1 << " : ";
        cin >> asignaturas[i];
        cout << "UV de " << asignaturas[i] << " : ";
        cin >> notas_uv[i][0];
        cout << "Nota de " << asignaturas[i] << " : ";
        cin >> notas_uv[i][1];
    }

    UM = 0;
    sumUV = 0;
    for (int i = 0; i<=3; i++)
    {
        sumUV = sumUV + notas_uv[i][0];
        UM = UM + notas_uv[i][1]*notas_uv[i][0];
    }
    CUM = UM/sumUV;

    cout << "\n\n";
    cout <<"Asignatura\t\tUV\t\tNota\n";

    for (int i = 0; i<=3; i++)
    {
        cout << asignaturas[i] << "\t\t"<< notas_uv[i][0];
        cout << "\t\t" << notas_uv[i][1] << "\n";
    }
    cout << "Las unidades de merito son: " << UM;
    cout << " La suma de UV es: " << sumUV << "\n";

    cout << "Su CUM es: " << CUM;

    return 0;
}