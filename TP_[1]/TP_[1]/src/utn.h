/*
 * utn.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Agusking
 */

#ifndef UTN_H_
#define UTN_H_
/**
 *Toma un valor del usuario y lo valida.
 *
 */
int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos);
/**
 *
 *Toma un flotante del usuario y lo valida.
 *
 */
int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
        float maximo, float minimo, int maximoDeReintentos);
/**
 *
 * Toma un valor y le aplica un 10 porciento de descuento.
 */
int utn_getDiezPorcientoDescuento(float tercerNumero, float primerNumero);
/**
 *
 * Toma un valor y le aplica un 25 porciento de aumento.
 *
 */
int utn_getVenticincoPorcientoAumento(float tercerNumero, float primerNumero);
/**
 *
 * Toma un valor y lo convierte a Bitcoin.
 *
 */
float utn_getPrecioBitcoin(float c, float b);
/**
 *Toma 2 valores y devuelve el precio unitario.
 *
 */
float utn_getPrecioUnitario(float op1, float op2);
/**
 *
 *Toma 2 valore y aplica una diferencia de precio.
 *
 */
float utn_getDiferenciaDePrecio(float op1, float op2);



#endif /* UTN_H_ */
