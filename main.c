#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,edad,sumaedad=0,promedad=0,cant10=0,cant140=0;
    float estatura,sumaestatura=0,promestatura=0;

    for(i=0;i<3;i++)
    {
        printf("Ingrese la edad: ");
        scanf("%d",&edad);
        printf("Ingrese la estatura en mts: ");
        scanf("%f",&estatura);
        printf("\n");

        sumaedad=sumaedad+edad;
        promedad=sumaedad/3;
        sumaestatura=sumaestatura+estatura;
        promestatura=sumaestatura/3;

        if(edad>10)
        {
            cant10++;
        }
        if(estatura<1.39)
        {
            cant140++;
        }
    }
        printf("El promedio de la edad es de: %d\n",promedad);
        printf("El promedio de la estatura es de: %.2f\n",promestatura);
        printf("La cantidad de alumnos mayores a 10 anios es de: %d\n",cant10);
        printf("La cantidad de alumnos que miden menos de 1.40 es de: %d\n",cant140);

    return 0;
}
