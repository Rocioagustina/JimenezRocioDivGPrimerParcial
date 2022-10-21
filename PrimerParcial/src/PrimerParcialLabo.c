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

#define MENSAJE_SALIR "Desea salir del programa? s/n \n"
#define MENSAJE_ERROR_SALIR "Hubo un error y no se pudo cerrar el programa\n"
#define FIN_DEL_PROCESO "Programa cerrado con exito\n"



int main(void) {

	setbuf(stdout, NULL);
	int opcion;
	char salir [5];


	do
	{
		printf("1. ALTA\n");
		printf("2. BAJA\n");
		printf("3. MODIFICACION\n");
		printf("4. SALIR\n");

		scanf("%d", &opcion);


		switch(opcion)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4: tolower(pedirChar(MENSAJE_SALIR, MENSAJE_ERROR_SALIR, "El dato ingresado es correcto\n", salir));
				 if (stricmp(salir, "s") == 0)
				 {
					 printf("Programa cerrado correctamente\n");

				 } else
				 {
					 opcion = 0;
					 printf("El programa no fue cerrado\n");
				 }
			break;
		}

	}while(opcion != 4);


	return EXIT_SUCCESS;
}

