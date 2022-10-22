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

void hardcodeoEmpresa (eEmpresa listaEmpresa [5])
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

