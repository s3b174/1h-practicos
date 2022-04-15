/*
 ============================================================================
 Name        : otrasFunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Prototipo de funcion

int sumarNumeros(int numero1, int numero2);


int main(void){

	int num1;
	int num2;
	int suma;

	printf("Ingrese un numero:\n");
	scanf("%d", &num1);

	printf("Ingrese otro numero:\n");
	scanf("%d", &num2);

	suma = sumarNumeros(num1, num2);
	printf("La suma de los dos numeros es %d\n", suma);

	return 0;
}

int sumarNumeros(int numero1, int numero2){

	int resultado;

	resultado = numero1 + numero2;

	if(resultado > 100){

		resultado = 100;

	}

	return resultado;

}


