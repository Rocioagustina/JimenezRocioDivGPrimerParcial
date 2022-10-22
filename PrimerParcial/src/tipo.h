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

void hardcodeoTipo (eTipo listaTipo [5]);

#endif /* TIPO_H_ */
