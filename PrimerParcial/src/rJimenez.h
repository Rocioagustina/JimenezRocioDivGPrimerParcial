/*
 * rJimenez.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef RJIMENEZ_H_
#define RJIMENEZ_H_
#include "micro.h"
#include "tipo.h"

#define TAM_STR 256
#define TAM_INT 20



int pedirFloat (char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], float *pResultado);

int validarFloat (char resultado [TAM_STR]);

int pedirChar(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], char pCaracter [TAM_STR]);

int validarChar(char caracter [TAM_STR]);

int pedirInt(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], int *pEntero);

int validarInt(char entero [TAM_INT]);

int buscarLibreMicro(eMicro *listaMicro, int tamArray);

int darAltaMicro(eMicro *listaMicro, int tamArray, char mensajeIdEmpresa [TAM_STR], char mensajeErrorIdEmpresa [TAM_STR],
		char mensajeExitoIdEmpresa [TAM_STR], char mensajeErrorArray [TAM_STR], char mensajeIdTipo [TAM_STR], char mensajeErrorIdTipo [TAM_STR],
		char mensajeExitoIdTipo [TAM_STR], char mensajeCapacidad [TAM_STR], char mensajeErrorCapacidad [TAM_STR],
		char mensajeExitoCapacidad [TAM_STR], char mensajeCargaCompleta [TAM_STR], int id, int maximo, int minimo, eTipo *listaTipo, int tam);

int modificarTipo(char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR], eMicro *listaMicro, eTipo *listaTipo);

int modificarCapacidad(char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR], eMicro *listaMicro);

int modificarMicro(eMicro *listaMicro, int tamArray, char mensajeId [TAM_STR], char mensajeErrorId [TAM_STR], char mensajeExitoId [TAM_STR],
		char mensajeOpcion [TAM_STR], char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR],
		char mensajeModificarIdTipo [TAM_STR], char mensajeErrorModificarIdTipo [TAM_STR], char mensajeExitoModificarIdTipo [TAM_STR],
		char mensajeModificarCapacidad [TAM_STR], char mensajeErrorModificarCapacidad [TAM_STR], char mensajeExitoModificarCapacidad [TAM_STR], eTipo *listaTipo);

int darBajaMicro (eMicro *listaMicro, int tamArray, char mensajeId [TAM_STR], char mensajeErrorId [TAM_STR], char mensajeExitoId [TAM_STR],
			char mensajeErrorBaja [TAM_STR], char mensajeExitoBaja [TAM_STR], char mensajeErrorIdNoEncontrado [TAM_STR]);

void eliminarMicro(eMicro *listaMicro);


#endif /* RJIMENEZ_H_ */
