#include <stdio.h>
int main()
{
    char asignaturas[4];
    int UVs[4], sumUV=0;
    float Notas[4], UM = 0, CUM;


    for(int i =0; i<=3;i++)
    {
        printf("Nombre de asignatura %d = ",i+1);
        scanf("%s",&asignaturas[i]);
        printf("UV de %c = ",asignaturas[i]);
        scanf("%d",&UVs[i]);
        printf("Nota de %c = ",asignaturas[i]);
        scanf("%f",&Notas[i]);
    }

    sumUV = 0;
    UM = 0;

    for (int i=0; i <=3; i++)
    {
        sumUV = sumUV + UVs[i];
        UM = UM + UVs[i]*Notas[i];
    }
    CUM = UM/sumUV;
    printf("Asignatura  UV    Nota\n");

    for (int i = 0; i<=3; i++)
    {
        printf("%c%13d%8.2f\n",asignaturas[i],UVs[i],Notas[i]);
    }
    printf("suma de UV = %d      Unidades de merito: %7.2f\n",sumUV,UM);
    printf("Su CUM es: %5.2f",CUM);
    

    
    
    return 0;
}