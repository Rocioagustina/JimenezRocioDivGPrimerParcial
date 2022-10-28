/*
 * rJimenez.c
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rJimenez.h"
#include "micro.h"
#include "tipo.h"


#define TAM_STR 256
#define TAM_INT 20


/// @fn int pedirFloat(char[], char[], char[], float*)
/// @brief Pide y valida un numero flotante.
///
/// @param mensaje Es el mensaje que pide el numero flotante.
/// @param mensajeError El mensaje que indica que se ingreso un numero incorrecto.
/// @param mensajeExito El mensaje que indica que se ingreso un numero correcto
/// @param pResultado El puntero donde se guarda el numero flotante
/// @return  1 si todo sale bien y 0 si hay algun error.

int pedirFloat (char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], float *pResultado)
{
	int retorno;
	char floatSinValidar [TAM_STR];

	retorno = 1;

	if(pResultado != NULL)
	{
		printf(mensaje);
		scanf("%s", floatSinValidar);

		if(validarFloat(floatSinValidar) == 0)
		{
			printf(mensajeExito);
			*pResultado = atof(floatSinValidar);
			retorno = 0;
		}
		else
		{
			printf(mensajeError);
		}
	}

	return retorno;
}


/// @fn int validarFloat(char[])
/// @brief Valida un numero flotante.
///
/// @param resultado El numero a validar
/// @return 1 si todo sale bien y 0 si hay algun error.

int validarFloat (char resultado [TAM_STR])
{
	int retorno;
	int banderaFlotante;
	int i;

	retorno = 0;
	banderaFlotante = 0;


	for(i=0 ; i<strlen(resultado) ; i++)
	{
		if(resultado [i] < '0' || resultado [i] > '9')
		{
			if (resultado [i] == '.')
			{
				if (banderaFlotante == 1)
				{
					retorno = 1;
					break;
				}
			banderaFlotante = 1;
			}else
			{
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}


/// @fn int pedirChar(char[], char[])
/// @brief Pide una cadena de caracteres
/// @param mensaje El mensaje para pedir la cadena de caracteres
/// @param mensajeError El mensaje que indica que se ingreso una cadena incorrecta
/// @param mensajeExito El mensaje que indica que se ingreso una cadena correcta
/// @param pCaracter El puntero donde se guarda la cadena de caracteres
/// @return 0 si sale todo bien y 1 si hay algun error

int pedirChar(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], char pCaracter [TAM_STR])
{
	char charSinValidar [TAM_STR];
	int retorno;

	retorno = 0;

	if(pCaracter != NULL)
	{
		printf(mensaje);
		scanf("%s", charSinValidar);

		if(validarChar(charSinValidar) == 0)
		{
			strcpy(pCaracter, charSinValidar);
			printf(mensajeExito);
		}
		else
		{
			printf(mensajeError);
			retorno = -1;
		}
	}

	return retorno;
}


/// @fn int validarChar(char[])
/// @brief Valida una cadena de caracteres
///
/// @param caracter La cadena de caracteres a validar
/// @return 0 si sale todo bien y 1 si hay algun error

int validarChar(char caracter [TAM_STR])
{
	int i;
	int retorno;

	retorno = 0;

	for(i = 0; i < strlen(caracter); i++)
	{
		if(caracter[i] >= '0' && caracter[i] <= '9')
		{
			retorno = 1;
			break;
		}
	}

	return retorno;
}


/// @fn int pedirInt(char[], int*)
/// @brief Pide un numero entero
/// @param mensaje El mensaje que pide un entero
/// @param mensajeError El mensaje que indica que se ingreso un numero incorrecto.
/// @param mensajeExito El mensaje que indica que se ingreso un numero correcto
/// @param pEntero El puntero donde se guarda el entero
/// @return 0 si sale todo bien y 1 si hay algun error

int pedirInt(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], int *pEntero)
{
	int retorno;
	char numeroSinValidar [TAM_INT];
	retorno = 0;

	if(pEntero != NULL)
	{
		printf(mensaje);
		scanf("%s", numeroSinValidar);

		if (validarInt(numeroSinValidar) == 0)
		{
			*pEntero = atoi(numeroSinValidar);
			printf(mensajeExito);

		}
		else
		{
			retorno = -1;
			printf(mensajeError);
		}
	}

	return retorno;
}

/// @fn int validarInt(char[])
/// @brief  Valida un numero entero
///
/// @param entero el entero a validar
/// @return  0 si sale todo bien y 1 si hay algun error

int validarInt(char entero [TAM_INT])
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0 ; i<strlen(entero) ; i++)
	{
		if(entero [i] < '0' || entero [i] > '9')
		{
			retorno = 1;
			break;
		}
	}

	return retorno;
}


int buscarLibreMicro(eMicro *listaMicro, int tamArray)
{
	int retorno;
	int i;

	retorno = -1;

	for(i = 0; i < tamArray; i++)
	{
		if(listaMicro[i].isEmpty != 0)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}


int darAltaMicro(eMicro *listaMicro, int tamArray, char mensajeIdEmpresa [TAM_STR], char mensajeErrorIdEmpresa [TAM_STR],
		char mensajeExitoIdEmpresa [TAM_STR], char mensajeErrorArray [TAM_STR], char mensajeIdTipo [TAM_STR], char mensajeErrorIdTipo [TAM_STR],
		char mensajeExitoIdTipo [TAM_STR], char mensajeCapacidad [TAM_STR], char mensajeErrorCapacidad [TAM_STR],
		char mensajeExitoCapacidad [TAM_STR], char mensajeCargaCompleta [TAM_STR], int id, int maximo, int minimo, eTipo *listaTipo, int tam)
{
	int retorno;
	eMicro aux;
	int indice;

	retorno = -1;

	indice = buscarLibreMicro(listaMicro, tamArray);

	if(indice != -1)
	{
		if(pedirInt(mensajeIdEmpresa,  mensajeErrorIdEmpresa, mensajeExitoIdEmpresa, &aux.idEmpresa) == 0)
		{
			informarTipos(listaTipo, tam);

			if(pedirInt(mensajeIdTipo, mensajeErrorIdTipo, mensajeExitoIdTipo, &aux.idTipo) == 0)
			{
				if(pedirInt(mensajeCapacidad, mensajeErrorCapacidad, mensajeExitoCapacidad, &aux.capacidad) == 0)
				{
					if(aux.capacidad > minimo && aux.capacidad < maximo)
					{
						printf(mensajeCargaCompleta);
						aux.id = id;
						aux.isEmpty = 0;
						retorno = 0;
					} else
					{
						printf("Valor invalido, La capacidad es de entre 1 y 50/n");
					}
				}
			}
		}
	}
	else
	{
		printf(mensajeErrorArray);
	}


	return retorno;
}

int modificarMicro(eMicro *listaMicro, int tamArray, char mensajeId [TAM_STR], char mensajeErrorId [TAM_STR], char mensajeExitoId [TAM_STR],
		char mensajeOpcion [TAM_STR], char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR],
		char mensajeModificarIdTipo [TAM_STR], char mensajeErrorModificarIdTipo [TAM_STR], char mensajeExitoModificarIdTipo [TAM_STR],
		char mensajeModificarCapacidad [TAM_STR], char mensajeErrorModificarCapacidad [TAM_STR], char mensajeExitoModificarCapacidad [TAM_STR], eTipo *listaTipo)
{
	int retorno;
	int idBorrar;
	int indice;
	int opcion;

	retorno = 1;

	informarMicros(listaMicro);

	if(pedirInt(mensajeId, mensajeErrorId, mensajeExitoId, &idBorrar) == 0)
	{
		indice = encontrarMicroPorId(listaMicro, tamArray, idBorrar);
		if(indice != -1)
		{
			 pedirInt(mensajeModificar, mensajeErrorModificar, mensajeExitoModificar, &opcion);

			 switch(opcion)
			 {
			 case 1: if(modificarTipo (mensajeModificarIdTipo, mensajeErrorModificarIdTipo, mensajeExitoModificarIdTipo, &listaMicro[indice], listaTipo) != -1)
					 {
						retorno = 0;
					 }
					break;


			 case 2: if(modificarCapacidad(mensajeModificarCapacidad, mensajeErrorModificarCapacidad, mensajeExitoModificarCapacidad, &listaMicro[indice])
					 != -1)
					 {
						 retorno = 0;
					 }
					break;

			}
		}

	}
	return retorno;
}

int modificarTipo(char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR], eMicro *listaMicro, eTipo *listaTipo)
{
	int retorno;
	int tipoModificado;

	retorno = -1;

	retorno = pedirInt(mensajeModificar, mensajeErrorModificar, mensajeExitoModificar, &tipoModificado);
	if(retorno != -1)
	{
		listaMicro->idTipo = tipoModificado;
	}

	return retorno;
}

int modificarCapacidad(char mensajeModificar [TAM_STR], char mensajeErrorModificar [TAM_STR], char mensajeExitoModificar [TAM_STR], eMicro *listaMicro)
{
	int retorno;
	int capacidadModificada;

	retorno = -1;

	retorno = pedirInt(mensajeModificar, mensajeErrorModificar, mensajeExitoModificar, &capacidadModificada);
	if(retorno != -1)
	{
		listaMicro->capacidad = capacidadModificada;
	}

	return retorno;
}

int darBajaMicro (eMicro *listaMicro, int tamArray, char mensajeId [TAM_STR], char mensajeErrorId [TAM_STR], char mensajeExitoId [TAM_STR],
			char mensajeErrorBaja [TAM_STR], char mensajeExitoBaja [TAM_STR], char mensajeErrorIdNoEncontrado [TAM_STR])
{
	int retorno;
	int idBorrar;
	int indice;


	retorno = 1;

	informarMicros(listaMicro);

	 if(pedirInt(mensajeId, mensajeErrorId, mensajeExitoId, &idBorrar) == 0)
	 {
		 indice = encontrarMicroPorId(listaMicro, tamArray, idBorrar);
		 if(indice != -1)
		 {
			 eliminarMicro(&listaMicro[indice]);
			 printf(mensajeExitoBaja);
			 retorno = 0;
		 } else
		 {
			 printf(mensajeErrorIdNoEncontrado);
		 }
	 }
	 else
	 {
		 printf(mensajeErrorBaja);
	 }

	return retorno;
}




