/*
 ============================================================================
 Name        : Programacion_I_1G.c
 Author      : Daniel Ruiz
 Version     :
 Copyright   : DanielRuiz
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 10


typedef struct{
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;

float aplicarAumento( float precio);

int main(void) {

	float precio=1200;
	float precioConAumento;
	precioConAumento = aplicarAumento(precio);

	printf("%.2f", precioConAumento);

	eVacuna vacunas[TAM];

	return EXIT_SUCCESS;
}

/*1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto
y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.*/


float aplicarAumento(float precio){
	float resultado;
	int porcentajeAumento = 5;
	resultado = (float) precio * porcentajeAumento/100;
	return resultado;
}

/*2. Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres
como primer parámetro, un carácter como segundo y otro carácter  como tercero,
la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero
 y devolver la cantidad de veces que se reemplazo ese carácter  en la cadena*/


/*3. Dada la siguiente estructura generar una función que permita ordenar un array
de dicha estructura por tipo. Ante igualdad de tipo deberá ordenarse por efectividad creciente.
Hardcodear datos y mostrarlos desde el main.*/

int ordenarVacunaTipoEfect(vacunas[],int tam){
	int todoOK = 0
	eVacuna auxTipo;
		if(vacunas != NULL && tam > 0){
			for(int i = 0; i < tam-1 ;i++){
				for(int j = i+1; j< tam ; j++){
					if(vacunas[i]

					}
				}
			}
	todoOK=1;
		}
	return todoOK;
}




