/*
 * empresa.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "empresa.h"

void hardcodeoEmpresa (eEmpresa *listaEmpresa)
{
	listaEmpresa [0].id = 1000;
	strcpy(listaEmpresa->descripcion, "Plusmar");

	listaEmpresa [1].id = 1001;
	strcpy(listaEmpresa->descripcion, "FlechaBus");

	listaEmpresa [2].id = 1002;
	strcpy(listaEmpresa->descripcion, "Tas");

	listaEmpresa [3].id = 1003;
	strcpy(listaEmpresa->descripcion, "El Rapido");
}

void informarEmpresas(eEmpresa *listaEmpresa, int tam)
{
	int i;

	printf("Las empresas son:\n");

	for(i = 0; i < tam; i++)
	{
		if(listaEmpresa[i].isEmpty == 0)
		{
			mostrarUnaEmpresa(listaEmpresa[i]);
		}

	}

}

void mostrarUnaEmpresa(eEmpresa listaEmpresa)
{

	printf("%d\n\n", listaEmpresa.id);
	printf(listaEmpresa.descripcion);
}
