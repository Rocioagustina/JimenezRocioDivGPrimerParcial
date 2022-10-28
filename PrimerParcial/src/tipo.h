/*
 * tipo.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
	int id;
	char descripcion [20];
	int isEmpty;
}eTipo;

void hardcodeoTipo (eTipo *listaTipo);

void informarTipos(eTipo *listaTipo, int tam);

void mostrarUnTipo(eTipo listaTipo);


#endif /* TIPO_H_ */
