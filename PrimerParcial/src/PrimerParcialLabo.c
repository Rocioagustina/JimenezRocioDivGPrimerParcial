/*
 ============================================================================
 Name        : PrimerParcialLabo.c
 Author      : Rocio Jimenez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "rJimenez.h"
#include "empresa.h"
#include "tipo.h"
#include "destino.h"
#include "viaje.h"

#define TAM_ARRAY_MICRO 5
#define TAM_ARRAY_EMPRESA 5
#define TAM_ARRAY_TIPO 5
#define TAM_ARRAY_DESTINO 5
#define TAM_ARRAY_VIAJE 5




int main(void) {

	setbuf(stdout, NULL);
	int opcion;
	eMicro arrayMicro [TAM_ARRAY_MICRO];
	eEmpresa arrayEmpresa [TAM_ARRAY_EMPRESA];
	eTipo arrayTipo [TAM_ARRAY_TIPO];
	eDestino arrayDestino[TAM_ARRAY_DESTINO];
	eViaje arrayViaje [TAM_ARRAY_VIAJE];
	int idMicro;
	int idViaje;


	hardcodeoEmpresa (arrayEmpresa);
	hardcodeoTipo (arrayTipo);
	hardcodeoDestino (arrayDestino);


	do
	{
		printf("1. ALTA\n");
		printf("2. BAJA\n");
		printf("3. MODIFICACION\n");
		printf("4. LISTAR MICROS\n");
		printf("5. LISTAR EMPRESAS\n");
		printf("6. LISTAR TIPOS\n");
		printf("7. LISTAR DESTINOS\n");
		printf("8. ALTA VIAJE\n");
		printf("9. LISTAR VIAJES\n");


		scanf("%d", &opcion);


		switch(opcion)
		{
		case 1: if(darAltaMicro(arrayMicro, TAM_ARRAY_MICRO, "Ingrese el id del micro\n", "Error al ingresar el id del micro\n",
					"El id del micro fue ingresado correctamente\n", "No se puede ingresar el micro ya que no hay mas espacio\n", "Ingrese el id del tipo\n",
					"Error al ingresar el id del tipo\n", "El id del tipo fue ingresado correctamente\n", "Ingrese la capacidad del micro\n",
					"Error al ingresar la capacidad del micro\n", "La capacidad del micro fue ingresada correctamente\n", "El alta del micro ha sido completada exitosamente\n",
					idMicro, 50, 1, arrayTipo, TAM_ARRAY_TIPO))
				{
					idMicro++;
				}
			break;
		case 2: modificarMicro(arrayMicro, TAM_ARRAY_MICRO,"Ingrese el id del micro\n", "Error al ingresar el id del micro\n",
				"El id del micro fue ingresado correctamente\n", "Ingrese una opcion: \n", "Ingrese el dato que desea modificar: \n",
				"Error en la modificacion, no pudo realizarse \n", "La modificacion ha sido completada exitosamente \n", "El id del tipo fue ingresado correctamente \n",
				"Error al ingresar el id del tipo \n", "El id del tipo fue modificado correctamente\n", "La capacidad fue ingresada correctamente\n",
				"Error al ingresar la capacidad\n", "La capacidad fue modificada correctamente\n", arrayTipo);
			break;
		case 3: darBajaMicro(arrayMicro, TAM_ARRAY_MICRO, "Ingrese el id\n", "Error al ingresar el id del micro\n", "El id del micro fue ingresado correctamente\n",
				"Error en la baja, no pudo realizarse\n", "La baja del micro ha sido completada exitosamente\n", "Id no encontrado\n");
			break;
		case 4: ordenarPorEmpresa(arrayMicro, TAM_ARRAY_MICRO);
			break;
		case 5: informarEmpresas(arrayEmpresa, TAM_ARRAY_EMPRESA);
			break;
		case 6: informarTipos(arrayTipo, TAM_ARRAY_TIPO);
			break;
		case 7: informarDestino(arrayDestino, TAM_ARRAY_DESTINO);
			break;
		case 8: if(darAltaViaje(arrayViaje, TAM_ARRAY_VIAJE, "Ingrese el id del micro: \n", "Error al ingresar el id del micro\n",
				"El id del micro fue ingresado correctamente\n", "No se puede ingresar el micro ya que no hay mas espacio\n", "Ingrese el id del destino: \n",
				"Error al ingresar el id del destino\n", "El id del destino fue ingresado correctamente\n", "Ingrese el dia\n", "Error al ingresar el dia\n",
				"El dia fue ingresado correctamente\n", "Ingrese el mes: \n", "Error al ingresar el mes\n", "El mes fue ingresado correctamente\n",
				"Ingrese el año: \n", "Error al ingresar el año", "El año fue ingresado correctamente", "El alta del micro ha sido completada exitosamente\n",
				idViaje))
				{
					idViaje++;
				}
			break;
		case 9: informarViajes(arrayViaje, TAM_ARRAY_VIAJE);
			break;
		}


		}while(opcion != 9);


	return EXIT_SUCCESS;
}

