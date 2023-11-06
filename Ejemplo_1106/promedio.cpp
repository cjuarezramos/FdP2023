#include <stdio.h>
int main()
{
    float Notas[4] = {0};
    for (int i = 0; i<4;i++) // Ingreso de informacion
    {
        printf("Ingresa la nota %d = ",i);
        scanf("%f",&Notas[i]);
    }
    double suma = 0, promedio = 0;
    for (int i = 0; i<4;i++)
    {
        suma = suma + Notas[i];
    }

    promedio = suma/4;

    for (int i = 0;i<4;i++) // impresion de informacion
    {
        printf("Nota %2d ingresada es: %5.2f\n",i,Notas[i]);
    }
    printf("El promedio es: %5.2f\n",promedio);
    return 0;



}