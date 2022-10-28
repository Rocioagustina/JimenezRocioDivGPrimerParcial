/*
 * micro.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "micro.h"


void informarMicros(eMicro *listaMicro)
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

void ordenarPorEmpresa (eMicro *listaMicro, int tamArray)
{
    int flag;

    do
    {
        flag = 0;
        for (int i = 0; i < tamArray - 1; i++)
        {
            if(listaMicro[i].idEmpresa > listaMicro[i+1].idEmpresa)
            {
            	intercambiarMicros(&listaMicro[i], &listaMicro[i+1]);
                flag = 1;
            }
            else if ((listaMicro[i].idEmpresa > listaMicro[i+1].idEmpresa) == 1 && listaMicro[i].capacidad > listaMicro[i+1].capacidad)
            {
            	intercambiarMicros(&listaMicro[i], &listaMicro[i+1]);
                flag = 1;
            }
        }
    }while (flag);
}


void intercambiarMicros (eMicro *microUno, eMicro *microDos)
{
	eMicro buffer;
    buffer = *microUno;
    *microUno = *microDos;
    *microDos = buffer;
}
