/*
 * rJimenez.h
 *
 *  Created on: 21 oct. 2022
 *      Author: rocio
 */

#ifndef RJIMENEZ_H_
#define RJIMENEZ_H_


#define TAM_STR 256
#define TAM_INT 20



int pedirFloat (char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], float *pResultado);

int validarFloat (char resultado [TAM_STR]);

int pedirChar(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], char pCaracter [TAM_STR]);

int validarChar(char caracter [TAM_STR]);

int pedirInt(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExito [TAM_STR], int *pEntero);

int validarInt(char entero [TAM_INT]);

#endif /* RJIMENEZ_H_ */
