#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"

int main()
{
    system("color 0B");
    char seguir='s';
    int opcion=0;
    int a = 0;
    int b = 0;
    int muestra;
    float muestraFlt;
    system("cls");
    printf("***************************************************************\n");
    printf("***                                                         ***\n");
    printf("***                       Bienvenid@                        ***\n");
    printf("***                                                         ***\n");
    printf("*** Esta calculadora forma parte del Trabajo practico Nº 1. ***\n");
    printf("***          Materia: Programacion I / Laboratorio I        ***\n");
    printf("***      Carrera: Tecnicatura Superior en Programacion.     ***\n");
    printf("***                         UTN-FRA                         ***\n");
    printf("***                                                         ***\n");
    printf("***              Alumno: Bazan Gonzalo Mariano              ***\n");
    printf("***                     Legajo: 106909                      ***\n");
    printf("***                                                         ***\n");
    printf("***************************************************************\n\n\n");
    system("pause");

    while(seguir == 's')
    {
        system("cls");
        printf("***************************************************************\n");
        printf("***            Seleccione la opcion deseada (0-9)           ***\n");
        printf("***************************************************************\n");
        printf("*** 1- Ingresar 1er operando (A=%d)                          ***\n",a);
        printf("*** 2- Ingresar 2do operando (B=%d)                          ***\n",b);
        printf("*** 3- Calcular la suma (A+B)                               ***\n");
        printf("*** 4- Calcular la resta (A-B)                              ***\n");
        printf("*** 5- Calcular la division (A/B)                           ***\n");
        printf("*** 6- Calcular la multiplicacion (A*B)                     ***\n");
        printf("*** 7- Calcular el factorial (A!)                           ***\n");
        printf("*** 8- Calcular todas las operaciones                       ***\n");
        printf("*** 9- Salir                                                ***\n");
        printf("***************************************************************\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            a = dameInt("***               Ingrese el 1er operando(A):               ***\n");
            break;
        case 2:
            system("cls");
            b = dameInt("***               Ingrese el 2do operando(B):               ***\n");
            break;
        case 3:
            muestra = suma(a,b);
            printf("La suma entre %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            system("pause");
            break;
        case 4:
            muestra = resta(a,b);
            printf("La resta entre %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            system("pause");
            break;
        case 5:
            muestraFlt = division(a,b);
            printf("La division entre %d(A) y %d(B) es igual a %.2f\n",a,b,muestraFlt);
            system("pause");
            break;
        case 6:
            muestra = multiplicacion(a,b);
            printf("La multiplicacion de %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            system("pause");
            break;
        case 7:
            muestra = factorial(a);
            printf("El factorial de %d(A) es igual a %d\n",a,muestra);
            system("pause");
            break;
        case 8:
            system("cls");
            printf("*********************************************************************************\n");
            printf("*** Estos son los resultados de las distintas operaciones entre %d(A) y %d(B) ***\n",a,b);
            printf("*********************************************************************************\n");
            muestra = suma(a,b);
            printf(".- La suma entre %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            muestra = resta(a,b);
            printf(".- La resta entre %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            muestraFlt = division(a,b);
            printf(".- La division entre %d(A) y %d(B) es igual a %.2f\n",a,b,muestraFlt);
            muestra = multiplicacion(a,b);
            printf(".- La multiplicacion de %d(A) y %d(B) es igual a %d\n",a,b,muestra);
            muestra = factorial(a);
            printf(".- El factorial de %d(A) es igual a %d\n\n",a,muestra);
            system("pause");
            break;
        case 9:
            system("cls");
            printf("***************************************************************\n");
            printf("***             Espero volver a verte pronto...             ***\n");
            printf("***                         Adios :)                        ***\n");
            printf("***************************************************************\n\n");
            seguir = 'n';
            system("pause");
            break;
        default:
            printf("%d no es una opcion valida.\n",opcion);
            system("pause");
            break;
        }

    }
    return 0;
}
