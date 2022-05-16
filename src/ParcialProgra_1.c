/*
 ============================================================================
 Name        : ParcialProgra_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int ContarCaracteres(char *cadena, int tam, char caracter);
float CalcularDescuento(float precio);

int main(void) {

	setbuf(stdout,NULL);

	char mensaje[20] = "Avellaneda";

	float precio = 100;

	printf("La cantidad de caracteres e en la palabra %s son: %d\n", mensaje, ContarCaracteres(mensaje, 20, 'e'));

	printf("\nEl resultado de %.f con un descuento del 5 porciento es: %.2f\n\n",precio, CalcularDescuento(precio));

	system("pause");


}

int ContarCaracteres(char *cadena, int tam, char caracter)
{
	int contador = 0;

	if(cadena != NULL && tam > 0)
	{
		for(int i = 0; i < tam; i++)
		{
			if(cadena[i] == caracter)
			{
				contador++;
			}
		}
	}
	return contador;
}


float CalcularDescuento(float precio)
{
	return precio - (precio * 5) / 100;
}
