/*
 * Jose Luis Gonzalez
 * 1B
 * Legajo 105810
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
	setbuf(stdout,NULL);
    int numeroX=0; // Primer operando
    int numeroY=0; // segundo operando
    int resultSuma; //resultado de la funcion de suma
    int resultResta; //resultado de la funcion de resta
    int resultMultiplicacion; //resultado de la funcion multiplicacion
    int resultFactorizacionX; //resultado de la funcion de factorizacion del primer operando
    int resultFactorizacionY; //resultado de la funcion de factorizacion del segundo operando
    int operacionesRealizadas=0;
    int opcion; // opciones del menu
    float resultDivision; //resultado de la funcion de division

    do
    {
    printf("Menu principal\n");
    printf("\nPresione 1 para Ingresar 1er operando: %d",numeroX);
    printf("\nPresione 2 para Ingresar 2do operando: %d",numeroY);
    printf("\nPresione 3 para Calcular todas las operaciones");
    printf("\nPresione 4 para Informar resultados");
    printf("\nPresione 5 para Salir");
    printf("\n");
    printf("\nPor favor eliga una opcion \n");
    printf("\n");
    scanf("%d",&opcion); //tomo una opcion del menu

        switch(opcion)
        {
        case 1:
        printf("\n");
        printf("Ingrese el primer numero\n");
        printf("\n");
        scanf("%d",&numeroX); //tomo el primer dividendo
        break;
        case 2:
        printf("\n");
        printf("Ingrese el segundo numero\n"); //tomo el segundo dividendo
        printf("\n");
        scanf("%d",&numeroY);
        break;
        case 3:

        resultSuma=suma(numeroX,numeroY); //realizo la operacion con la funcion suma
        resultResta=resta(numeroX,numeroY); //realizo la operacion con la funcion resta
        resultMultiplicacion=multiplicacion(numeroX,numeroY); //realizo la operacion con la funcion multiplicacion
            if(numeroY!=0) // verifico que el segundo operando no sea 0
            {
            resultDivision=division(numeroX,numeroY); //realizo la operacion con la funcion division
            }
            else
            {
            printf("\nNo se puede dividir por 0\n");
            }
            if(numeroX>=0)
            {
            resultFactorizacionX=factorial(numeroX); //realizo la operacion con funcion factorizacion
            }
            else
            {
            printf("\nNo se puede factorizar un numero negativo\n");
            }
            if(numeroY>=0)
            {
            resultFactorizacionY=factorial(numeroY); //realizo la operacion con funcion factorizacion
            }
            else
            {
            printf("\nNo se puede factorizar un numero negativo\n");
            }

            operacionesRealizadas=1; //Aux para verificar que las cuentas se hagan antes de mostrar resultados
            printf("\n*************************Operaciones Calculadas*************************\n");


            break;

        case 4:
            if ((operacionesRealizadas=1))
            {
            printf ("\n*************************Los resultados son:*************************\n");
            printf("\nEl resultado de %d + %d es: %d\n",numeroX,numeroY,resultSuma); //informo resultados de suma
            printf("\nEl resultado de %d - %d es: %d\n",numeroX,numeroY,resultResta); //informo resultados de resta
            printf("\nEl resultado de %d * %d es: %d\n",numeroX,numeroY,resultMultiplicacion); //informo resultados de multiplicacion
                if (numeroY==0)
                {
                printf("\nNo se puede dividir %d por %d porque el segundo dividendo es 0\n",numeroX,numeroY);
                }
                else
                {
                printf("\nEl resultado de %d / %d es: %.2f\n",numeroX,numeroY,resultDivision);
                }
                if (numeroX<0)
                {
                printf("\nNo se puede factorear %d ya que es un numero negativo\n",numeroX);
                }
                else
                printf("\nEl factorial de %d es: %d\n",numeroX,resultFactorizacionX); //informo resultados de factorial
                if (numeroY<0)
                {
                printf("\nNo se puede factorear %d ya que es un numero negativo\n",numeroY);
                }
                else
                printf("\nEl factorial de %d es: %d\n\n",numeroY,resultFactorizacionY); //informo resultados de factorial
                break;

        case 5:
        printf("\n");
        printf("Salir");
        break;
            }
        } //cierre del switch (opciones)
    } // cierre del do (menu)
    while(opcion != 5);
    return 0;
} // cierre de del main
