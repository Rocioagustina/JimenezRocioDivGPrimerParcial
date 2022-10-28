/*
 * viaje.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rJimenez.h"
#include "viaje.h"
//#include "fecha.h"

#define TAM_STR 256

int darAltaViaje(eViaje *listaViaje, int tamArray, char mensajeIdMicro [TAM_STR], char mensajeErrorIdMicro  [TAM_STR], char mensajeExitoIdMicro  [TAM_STR],
		char mensajeErrorArray [TAM_STR], char mensajeIdDestino [TAM_STR], char mensajeErrorIdDestino [TAM_STR], char mensajeExitoIdDestino [TAM_STR],
		char mensajeDia [TAM_STR], char mensajeErrorDia [TAM_STR], char mensajeExitoDia [TAM_STR], char mensajeMes [TAM_STR], char mensajeErrorMes [TAM_STR],
		char mensajeExitoMes [TAM_STR], char mensajeAnio [TAM_STR], char mensajeErrorAnio [TAM_STR], char mensajeExitoAnio [TAM_STR],
		char mensajeCargaCompleta [TAM_STR], int id)
{
	int retorno;
	eViaje aux;
	int indice;

	retorno = -1;

	indice = buscarLibreViaje(listaViaje, tamArray);

	if(indice != -1)
	{
		if(pedirInt(mensajeIdMicro,  mensajeErrorIdMicro, mensajeExitoIdMicro, &aux.idMicro) == 0)
		{
			if(pedirInt(mensajeIdDestino, mensajeErrorIdDestino, mensajeExitoIdDestino, &aux.idDestino) == 0)
			{
				if(pedirInt(mensajeDia, mensajeErrorDia, mensajeExitoDia, &aux.fecha.dia) == 0)
				{
					if(pedirInt(mensajeMes, mensajeErrorMes, mensajeExitoMes, &aux.fecha.mes) == 0)
					{
						if(pedirInt(mensajeAnio, mensajeErrorAnio, mensajeExitoAnio, &aux.fecha.anio) == 0)
						{
							printf(mensajeCargaCompleta);
							aux.id = id;
							retorno = 0;
						}
					}
				}
			}
		}
	}
	else
	{
		printf(mensajeErrorArray);
	}


	return retorno;
}

int buscarLibreViaje(eViaje *listaViaje, int tamArray)
{
	int retorno;
	int i;

	retorno = -1;

	for(i = 0; i < tamArray; i++)
	{
		if(listaViaje[i].isEmpty != 0)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}

void informarViajes(eViaje *listaViaje, int tam)
{
	int i;

	printf("Los viajes son:\n");

	for(i = 0; i < tam; i++)
	{
		if(listaViaje[i].isEmpty == 0)
		{
			mostrarUnViaje(listaViaje[i]);
		}

	}

}

void mostrarUnViaje(eViaje listaViaje)
{

	printf("%d\n\n", listaViaje.id);
	printf("%d", listaViaje.idDestino);
	printf("%d", listaViaje.idMicro);
	printf("%d/%d/%d", listaViaje.fecha.dia, listaViaje.fecha.mes, listaViaje.fecha.anio);
}
