/*
PRUEBA DE MENU Y SUB MENU 1
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout,NULL);

	int opcionDelMenu;
	float kilometrosIngresados = 0.0;
	float precioDelVueloLatam = 0.0;
	float precioDelVueloAerolineas = 0.0;
	int validacionRetorno;
	int opcionSubMenu;
	int opcionSubMenu2;
	float descuentoDiezPorcientoAerolineas;
	float descuentoDiezPorcientoLatam;
	float aumentoVenticincoPorcientoAerolineas;
	float aumentoVenticincoPorcientoLatam;
	float precioBitcoinAerolineas = 0.0;
	float precioBitcoinLatam = 0.0;
	float precioUnitarioAerolineas = 0.0;
	float precioUnitarioLatam = 0.0;
	float diferenciaPrecio = 0.0;



	do{


		printf("MENU PRINCIPAL:\n");
		printf("1) Ingresar Kilometros. Kilometros ingresados actuales: %.2f KM.\n",kilometrosIngresados);
		printf("2) Ingresar precio de vuelo. Precio ingresado actual Latam: $%.2f. | Precio ingresado actual Aerolineas: $%.2f. \n",precioDelVueloLatam,precioDelVueloAerolineas);
		printf("3) Calcular costos.\n");
		printf("4) Informar resultados.\n");
		printf("5) Carga forzada de datos.\n");
		printf("6) Salir.\n");

		validacionRetorno = utn_getInt(&opcionDelMenu,"Seleccione una opcion:"
								,"La opcion es incorrecta.\n",6,1,2);


	switch(opcionDelMenu)
	{
				case 1:
					validacionRetorno = utn_getFloat(&kilometrosIngresados,"Ingrese los Kilometros (entre 1 y 999999):"
													,"Los Kilometros ingresados no son validos.\n",999999.0,1.0,2);
					break;
				case 2:

					do{
					printf("MENU OPCION 2):\n");
					printf("1) Ingresar precio vuelo Aerolíneas: $ | Precio ingresado actual: $ %.2f\n",precioDelVueloAerolineas);
					printf("2) Ingresar precio vuelo Latam: | Precio ingresado actual: $ %.2f\n",precioDelVueloLatam);
					printf("3) Volver al menu principal.\n");

					validacionRetorno = utn_getInt(&opcionSubMenu,"Seleccione una opcion:"
																		,"Opcion no valida.\n",3,1,2);
					switch(opcionSubMenu)
					{
					case 1:
						validacionRetorno = utn_getFloat(&precioDelVueloAerolineas,"Ingrese precio vuelo Aerolineas (mayor o igual a $1):"
																			,"Precio ingresado no es valido.\n",9999999999.0,1.0,2);
						break;
					case 2:
						validacionRetorno = utn_getFloat(&precioDelVueloLatam,"Ingrese precio vuelo Latam (mayor o igual a $1):"
																									,"Precio ingresado no es valido.\n",9999999999.0,1.0,2);
						break;
					}
					}while(opcionSubMenu !=3);
					break;
				case 3:
					descuentoDiezPorcientoAerolineas = utn_getDiezPorcientoDescuento(precioDelVueloAerolineas,0.10);
					descuentoDiezPorcientoLatam = utn_getDiezPorcientoDescuento(precioDelVueloLatam,0.10);

					aumentoVenticincoPorcientoAerolineas = utn_getVenticincoPorcientoAumento(precioDelVueloAerolineas, 1.25);
					aumentoVenticincoPorcientoLatam = utn_getVenticincoPorcientoAumento(precioDelVueloLatam, 1.25);

					precioBitcoinAerolineas = utn_getPrecioBitcoin(precioDelVueloAerolineas, 4606954.55);
					precioBitcoinLatam = utn_getPrecioBitcoin(precioDelVueloLatam, 4606954.55);

					precioUnitarioAerolineas = utn_getPrecioUnitario(precioDelVueloAerolineas, kilometrosIngresados);
					precioUnitarioLatam = utn_getPrecioUnitario(precioDelVueloLatam, kilometrosIngresados);

					diferenciaPrecio = utn_getDiferenciaDePrecio(precioDelVueloAerolineas,precioDelVueloLatam);

					printf("Costos calculados exitosamente.\n");

					break;
				case 4:

					do{
					printf("\n");
					printf("Kilometros ingresados: %.2fKM.\n", kilometrosIngresados);
					printf("Aerolineas:\n");
					printf("a) Precio con tarjeta de débito: $%.2f.\n",descuentoDiezPorcientoAerolineas);
					printf("b) Precio con tarjeta de crédito: $%.2f.\n",aumentoVenticincoPorcientoAerolineas);
					printf("c) Precio pagando con bitcoin: %.8f BTC.\n",precioBitcoinAerolineas);
					printf("d) Precio unitario: $%.2f por KM.\n",precioUnitarioAerolineas);
					printf("\n");
					printf("Latam:\n");
					printf("a) Precio con tarjeta de débito: $%.2f.\n",descuentoDiezPorcientoLatam);
					printf("b) Precio con tarjeta de crédito: $%.2f.\n",aumentoVenticincoPorcientoLatam);
					printf("c) Precio pagando con bitcoin: %.8f BTC.\n",precioBitcoinLatam);
					printf("d) Precio unitario: $%.2f por KM.\n",precioUnitarioLatam);
					printf("\n");
					printf("La diferencia de precio es: $%.2f.\n",diferenciaPrecio);
					printf("\n");
					printf("0) Volver al menu principal.\n");

					validacionRetorno = utn_getInt(&opcionSubMenu2,"Seleccione una opcion:"
																							,"Opcion no valida.\n",0,0,2);
					}while(opcionSubMenu2 !=0);
					break;
				case 5:

					kilometrosIngresados = 7090.0;
					precioDelVueloAerolineas = 162965.0;
					precioDelVueloLatam = 159339.0;

					descuentoDiezPorcientoAerolineas = utn_getDiezPorcientoDescuento(precioDelVueloAerolineas,0.10);
					descuentoDiezPorcientoLatam = utn_getDiezPorcientoDescuento(precioDelVueloLatam,0.10);

					aumentoVenticincoPorcientoAerolineas = utn_getVenticincoPorcientoAumento(precioDelVueloAerolineas, 1.25);
					aumentoVenticincoPorcientoLatam = utn_getVenticincoPorcientoAumento(precioDelVueloLatam, 1.25);

					precioBitcoinAerolineas = utn_getPrecioBitcoin(precioDelVueloAerolineas, 4606954.55);
					precioBitcoinLatam = utn_getPrecioBitcoin(precioDelVueloLatam, 4606954.55);

					precioUnitarioAerolineas = utn_getPrecioUnitario(precioDelVueloAerolineas, kilometrosIngresados);
					precioUnitarioLatam = utn_getPrecioUnitario(precioDelVueloLatam, kilometrosIngresados);

				    diferenciaPrecio = utn_getDiferenciaDePrecio(precioDelVueloAerolineas,precioDelVueloLatam);
				    do{
				    	printf("Carga forzada de datos exitosa.\n");
				    	printf("\n");
				    	printf("Kilometros ingresados: %.2fKM.\n", kilometrosIngresados);
				    	printf("Aerolineas:\n");
				    	printf("a) Precio con tarjeta de débito: $%.2f.\n",descuentoDiezPorcientoAerolineas);
				    	printf("b) Precio con tarjeta de crédito: $%.2f.\n",aumentoVenticincoPorcientoAerolineas);
				    	printf("c) Precio pagando con bitcoin: %.8f BTC.\n",precioBitcoinAerolineas);
				    	printf("d) Precio unitario: $%.2f por KM.\n",precioUnitarioAerolineas);
				    	printf("\n");
				    	printf("Latam:\n");
				    	printf("a) Precio con tarjeta de débito: $%.2f.\n",descuentoDiezPorcientoLatam);
				    	printf("b) Precio con tarjeta de crédito: $%.2f.\n",aumentoVenticincoPorcientoLatam);
				    	printf("c) Precio pagando con bitcoin: %.8f BTC.\n",precioBitcoinLatam);
				    	printf("d) Precio unitario: $%.2f por KM.\n",precioUnitarioLatam);
				    	printf("\n");
				    	printf("La diferencia de precio es: $%.2f.\n",diferenciaPrecio);
				    	printf("\n");
				    	printf("0) Volver al menu principal.\n");

				    	validacionRetorno = utn_getInt(&opcionSubMenu2,"Seleccione una opcion:"
				    											,"Opcion no valida.\n",0,0,2);
				    	}while(opcionSubMenu2 !=0);

					break;
				case 6:
					printf("FIN DEL PROGRAMA.\n");
					break;
	}

	}while(opcionDelMenu != 6);

	return EXIT_SUCCESS;
}
