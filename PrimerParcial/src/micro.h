/*
 * micro.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef MICRO_H_
#define MICRO_H_


typedef struct{
	int id;
	int idEmpresa;
	int idTipo;
	int capacidad;
	int isEmpty;
}eMicro;


void informarMicros(eMicro listaMicro [5]);

int encontrarMicroPorId(eMicro *listaMicro, int tamArray, int id);

void mostrarUnMicro(eMicro listaMicro);

void eliminarMicro(eMicro *listaMicro);

#endif /* MICRO_H_ */
