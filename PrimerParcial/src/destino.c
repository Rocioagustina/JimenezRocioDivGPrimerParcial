/*
 * destino.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "destino.h"


void hardcodeoDestino (eDestino *listaDestino)
{
	listaDestino[0].id = 1;
	strcpy(listaDestino->descripcion, "Calafate: $22250");

	listaDestino[1].id = 2;
	strcpy(listaDestino->descripcion, "Bariloche: $103000");

	listaDestino[2].id = 3;
	strcpy(listaDestino->descripcion, "Salta: $84400");

	listaDestino[3].id = 4;
	strcpy(listaDestino->descripcion, "Mendoza: $95600");
}

void informarDestino(eDestino *listaDestino, int tam)
{
	int i;

	printf("Los destinos son:\n");

	for(i = 0; i < tam; i++)
	{
		if(listaDestino[i].isEmpty == 0)
		{
			mostrarUnDestino(listaDestino[i]);
		}

	}

}

void mostrarUnDestino(eDestino listaDestino)
{

	printf("%d\n\n", listaDestino.id);
	printf(listaDestino.descripcion);
}

