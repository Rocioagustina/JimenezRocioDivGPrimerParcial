/*
 * destino.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef DESTINO_H_
#define DESTINO_H_

typedef struct{
	int id;
	char descripcion [25];
	float precio;
	int isEmpty;
}eDestino;

void hardcodeoDestino (eDestino *listaDestino);

void informarDestino(eDestino *listaDestino, int tam);

void mostrarUnDestino(eDestino listaDestino);



#endif /* DESTINO_H_ */
