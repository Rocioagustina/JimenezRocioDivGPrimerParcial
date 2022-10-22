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

#define TAM_ARRAY_MICRO 5
#define TAM_ARRAY_EMPRESA 5
#define TAM_ARRAY_TIPO 5
#define TAM_ARRAY_DESTINO 5




int main(void) {

	setbuf(stdout, NULL);
	char opcion;
	eMicro arrayMicro [TAM_ARRAY_MICRO];
	eEmpresa arrayEmpresa [TAM_ARRAY_EMPRESA];
	eTipo arrayTipo [TAM_ARRAY_TIPO];
	eDestino arrayDestino[TAM_ARRAY_DESTINO];
	int id;


	hardcodeoEmpresa (arrayEmpresa);
	hardcodeoTipo (arrayTipo);
	hardcodeoDestino (arrayDestino);


	do
	{
		printf("1. ALTA\n");
		printf("2. BAJA\n");
		printf("3. MODIFICACION\n");
		printf("4. SALIR\n");

		scanf("%c", &opcion);


		switch(opcion)
		{
		case 'a': if(darAltaMicro(arrayMicro, TAM_ARRAY_MICRO, "Ingrese el id de la empresa\n", "Error al ingresar el id de la empresa\n",
					"El id de la empresa fue ingresado correctamente\n", "No se puede ingresar el micro ya que no hay mas espacio\n", "Ingrese el id del tipo\n",
					"Error al ingresar el id del tipo\n", "El id del tipo fue ingresado correctamente\n", "Ingrese la capacidad del micro\n",
					"Error al ingresar la capacidad del micro\n", "La capacidad del micro fue ingresada correctamente\n", "El alta del micro ha sido completada exitosamente\n",
					id, 50, 1))
				{
					id++;
				}
			break;
		case 'b':
			break;
		case 'c': darBajaMicro(arrayMicro, TAM_ARRAY_MICRO, "Ingrese el id,")
			/*(eMicro *listaMicro, int tamArray, char mensajeId [TAM_STR], char mensajeErrorId [TAM_STR],
					char mensajeExitoId [TAM_STR], char mensajeErrorBaja [TAM_STR], char mensajeExitoBaja [TAM_STR],
					char mensajeErrorIdNoEncontrado [TAM_STR])*/
			break;
		case 'd':
			break;
		case 'e':
			break;
		case 'f':
			break;
		case 'g':
			break;
		case 'h':
			break;
		case 'i':
			break;
		}


		}while(opcion != 'i');


	return EXIT_SUCCESS;
}

