/*
 * utn.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Agusking
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos){

    int auxNumeroIngresado;
    int retorno= -1;


    if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
        do{
            printf("%s", mensaje);
            scanf("%d", &auxNumeroIngresado);
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        retorno = 0;
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);

    }
    return retorno;
}


int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
        float maximo, float minimo, int maximoDeReintentos){

    float auxNumeroIngresado;
    int retorno;
    retorno = -1;

    if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
        do{
            printf("%s", mensaje);
            scanf("%f", &auxNumeroIngresado);
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        retorno = 0;
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);
    }

    return retorno;
}


int utn_getDiezPorcientoDescuento(float tercerNumero, float primerNumero)
{
    float porcentaje;
    float resultado;
    porcentaje= tercerNumero * primerNumero;
    resultado = tercerNumero - porcentaje;

    return resultado;
}

int utn_getVenticincoPorcientoAumento(float tercerNumero, float primerNumero)
{
    float resultado;
    resultado = tercerNumero * primerNumero;

    return resultado;
}

float utn_getPrecioBitcoin(float c, float b)
{
    float resultado;
    resultado= c / b;


    return resultado;
}

float utn_getPrecioUnitario(float op1, float op2)
{
	float resultado;

	resultado = op1 / op2;

	return resultado;

}

float utn_getDiferenciaDePrecio(float op1, float op2)
{
	float resultado;

	resultado = op1 - op2;

	return resultado;
}

