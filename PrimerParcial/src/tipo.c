/*
 * tipo.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tipo.h"

void hardcodeoTipo (eTipo listaTipo [5])
{
	listaTipo[0].id = 5000;
	strcpy(listaTipo->descripcion, "Comun");

	listaTipo[1].id = 5001;
	strcpy(listaTipo->descripcion, "CocheCama");

	listaTipo[2].id = 5002;
	strcpy(listaTipo->descripcion, "Doble");

	listaTipo[3].id = 5003;
	strcpy(listaTipo->descripcion, "Vip");
}
