#include <stdio.h>
int main()
{
    char asignaturas[4];
    int UVs[4];
    float Notas[4];

    for(int i =0; i<=3;i++)
    {
        printf("Nombre de asignatura %d = ",i+1);
        scanf("%s",&asignaturas[i]);
        printf("UV de %c = ",asignaturas[i]);
        scanf("%d",&UVs[i]);
        printf("Nota de %c = ",asignaturas[i]);
        scanf("%f",&Notas[i]);
    }
    printf("Asignatura  UV    Nota\n");

    for (int i = 0; i<=3; i++)
    {
        printf("%c%13d%8.2f\n",asignaturas[i],UVs[i],Notas[i]);
    }
    

    
    
    return 0;
}