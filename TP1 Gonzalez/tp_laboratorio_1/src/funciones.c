/*
 * funciones.c
 *
 *  Created on: 15 abr. 2021
 *      Author: jose_
 */


int suma(int op1, int op2)
{
    return op1+op2;
}

int resta(int op1, int op2)
{
    return op1-op2;
}

int multiplicacion(int op1, int op2)
{
    return op1*op2;
}

float division(int op1, int op2)
{
    return (float)op1/op2;
}

double factorial(int op1)
{
   double acumulador;

    for(acumulador=1;op1>1;op1--){

        acumulador*=op1;
    }

    return acumulador;
}
