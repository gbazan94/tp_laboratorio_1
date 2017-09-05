#include "funciones.h"
/**
*\brief Solicita al usuario que ingrese un numero.
*\param mensaje Es el mensaje a imprimir en la pantalla.
*\return El numero ingresado.
*
*/
int dameInt(char mensaje[])
{
    int entero;
    printf("***************************************************************\n");
    printf ("%s",mensaje);
    printf("***************************************************************\n");
    scanf("%d",&entero);
    return entero;
}

/**
*\brief Toma dos enteros ingresados por el usuario, los suma y devuelve el resultado.
*\param a y b Son los valores ingresados.
*\return El resultado de la operacion.
*
*/
int suma(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}

/**
*\brief Toma dos enteros ingresados por el usuario, los resta y devuelve el resultado.
*\param a y b Son los valores ingresados.
*\return El resultado de la operacion.
*
*/
int resta(int a, int b)
{
    int resultado;
    resultado = a - b;
    return resultado;
}

/**
*\brief Toma dos enteros ingresados por el usuario, los multiplica y devuelve el resultado.
*\param a y b Son los valores ingresados.
*\return El resultado de la operacion.
*
*/
int multiplicacion(int a, int b)
{
    int resultado;
    resultado = a*b;
    return resultado;
}

/**
*\brief Toma el valor de a, ingresado por el usuario, calcula el factorial y devuelve el resultado.
*\param a Es un valor ingresado por el usuario.
*\return El resultado de la operacion.
*
*/
int factorial(int a)
{
    int resultado=1;
    for (a; a > 1; a--)
    {
        resultado = resultado * a;
    }
    return resultado;
}

/**
*\brief Toma dos flotantes ingresados por el usuario, chequea que el divisor sea distinto de 0 y si es correcto, los divide y devuelve el resultado.
*\param a y b Son los valores ingresados.
*\return El resultado de la operacion.
*
*/
float division(float a, float b)
{
    float resultado;
    while (b == 0)
    {
        printf("ERROR: El divisor (B) no puede ser 0. La division por 0 es indefinida.\n");
        printf("Ingrese un nuevo valor para B: ");
        scanf("%d",&b);
    }
    resultado = a / b;
    return resultado;
}
