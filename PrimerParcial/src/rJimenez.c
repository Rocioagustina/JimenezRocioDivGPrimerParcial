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
///
/// @param mensaje El mensaje para pedir la cadena de caracteres
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
///
/// @param mensaje El mensaje que pide un entero
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




