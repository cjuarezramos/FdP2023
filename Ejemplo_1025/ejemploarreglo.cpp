#include <iostream>

int main()
{
    int uv[10]={0};
    char materia[100];
    char materias[10][100];
    std::string asignatura[10];
    materia[0] = 'e';
    materia[1] = 'l';
    materia[2] = 'e';
    materia[3] = 'm';
    materia[4] = 'e';
    materia[5] = 'n';
    materia[6] = 't';
    materia[7] = 'o';
    materia[8] = 's';
    asignatura[0]="elementos para el estudio de cyt";

    for (int i=0;i<=8;i++)
    {
        std :: cout << materia[i];
    }

    std :: cout <<"\n"<<asignatura[0];

    return 0;
}