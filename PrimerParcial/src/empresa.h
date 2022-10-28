/*
 * empresa.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_

typedef struct{
	int id;
	char descripcion [20];
	int isEmpty;
}eEmpresa;

void hardcodeoEmpresa (eEmpresa *listaEmpresa);

void informarEmpresas(eEmpresa *listaEmpresa, int tam);

void mostrarUnaEmpresa(eEmpresa listaEmpresa);

#endif /* EMPRESA_H_ */
