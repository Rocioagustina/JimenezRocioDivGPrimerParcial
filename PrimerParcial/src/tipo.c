/*
 * tipo.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tipo.h"
#include "viaje.h"

void hardcodeoTipo (eTipo *listaTipo)
{
	for (int i = 0; i < 5; i++)
	{
		listaTipo[i].isEmpty = 1;
	}


	listaTipo[0].id = 5000;
	strcpy(listaTipo[0].descripcion, "Comun");
	listaTipo[0].isEmpty = 0;

	listaTipo[1].id = 5001;
	strcpy(listaTipo[1].descripcion, "CocheCama");
	listaTipo[1].isEmpty = 0;

	listaTipo[2].id = 5002;
	strcpy(listaTipo[2].descripcion, "Doble");
	listaTipo[2].isEmpty = 0;

	listaTipo[3].id = 5003;
	strcpy(listaTipo[3].descripcion, "Vip");
	listaTipo[3].id = 0;
}

void informarTipos(eTipo *listaTipo, int tam)
{
	int i;

	printf("Los tipos son:\n");

	for(i = 0; i < tam; i++)
	{
		if(listaTipo[i].isEmpty == 0)
		{
			mostrarUnTipo(listaTipo[i]);
		}

	}

}

void mostrarUnTipo(eTipo listaTipo)
{

	printf("%d\n", listaTipo.id);
	printf(listaTipo.descripcion);
	printf("\n\n");
}
