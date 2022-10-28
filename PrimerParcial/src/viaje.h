/*
 * viaje.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef VIAJE_H_
#define VIAJE_H_

#include "fecha.h"
#define TAM_STR 256

typedef struct{
	int id;
	int idMicro;
	int idDestino;
	eFecha fecha;
	int isEmpty;
}eViaje;


/*int darAltaViaje(eViaje *listaViaje, int tamArray, char mensajeIdMicro [TAM_STR], char mensajeErrorIdMicro  [TAM_STR],
		char mensajeExitoIdMicro  [TAM_STR], char mensajeErrorArray [TAM_STR], char mensajeIdDestino [TAM_STR], char mensajeErrorIdDestino [TAM_STR],
		char mensajeExitoIdDestino [TAM_STR], char mensajeDia [TAM_STR], char mensajeErrorDia [TAM_STR], char mensajeExitoDia [TAM_STR], char mensajeMes [TAM_STR],
		char mensajeErrorMes [TAM_STR], char mensajeExitoMes [TAM_STR], char mensajeAnio [TAM_STR], char mensajeErrorAnio [TAM_STR], char mensajeExitoAnio [TAM_STR],
		 char mensajeCargaCompleta [TAM_STR], int id, int maximo, int minimo);*/

int darAltaViaje(eViaje *listaViaje, int tamArray, char mensajeIdMicro [TAM_STR], char mensajeErrorIdMicro  [TAM_STR],
		char mensajeExitoIdMicro  [TAM_STR], char mensajeErrorArray [TAM_STR], char mensajeIdDestino [TAM_STR], char mensajeErrorIdDestino [TAM_STR],
		char mensajeExitoIdDestino [TAM_STR], char mensajeDia [TAM_STR], char mensajeErrorDia [TAM_STR], char mensajeExitoDia [TAM_STR], char mensajeMes [TAM_STR],
		char mensajeErrorMes [TAM_STR], char mensajeExitoMes [TAM_STR], char mensajeAnio [TAM_STR], char mensajeErrorAnio [TAM_STR], char mensajeExitoAnio [TAM_STR],
		 char mensajeCargaCompleta [TAM_STR], int id);

int buscarLibreViaje(eViaje *listaViaje, int tamArray);

void informarViajes(eViaje *listaViaje, int tam);

void mostrarUnViaje(eViaje listaViaje);

#endif /* VIAJE_H_ */
