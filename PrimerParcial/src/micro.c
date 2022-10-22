/*
 * micro.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include "micro.h"


void informarMicros(eMicro listaMicro [5])
{
	int i;

	printf("Los datos de los micros son:\n");

	for(i = 0; i < 5; i++)
	{
		if(listaMicro[i].isEmpty == 0)
		{
			mostrarUnMicro(listaMicro[i]);
		}

	}

}

void mostrarUnMicro(eMicro listaMicro)
{

	printf("%d\n", listaMicro.id);
	printf("%d\n", listaMicro.capacidad);
	printf("%d\n", listaMicro.idEmpresa);
	printf("%d\n", listaMicro.idTipo);


}

int encontrarMicroPorId(eMicro *listaMicro, int tamArray, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i = 0; i < tamArray; i++)
	{
		if(listaMicro[i].id == id && listaMicro[i].isEmpty == 0)
		{
			retorno = i;
			break;
		}
	}


	return retorno;
}

void eliminarMicro(eMicro *listaMicro)
{
	listaMicro->isEmpty = 1;
}
