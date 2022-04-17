/*
 ============================================================================
 Name        : masFunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int multiplicar(int valor1, int valor2);
int dividir(int valor1, int valor2);
int sumar(int valor1, int valor2);
int restar(int valor1, int valor2);

int main(void){

	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	char operacion;
	int resultado;

	printf("Ingrese un numero:");
	scanf("%d", &num1);
	fflush(stdin);
	printf("Ingrese la operacion que quiera realizar (s r m d):");
	scanf("%c", &operacion);
	fflush(stdin);
	printf("Ingrese otro numero:");
	scanf("%d", &num2);
	fflush(stdin);

	if(operacion == 's'){

	suma = sumar(num1, num2);
	resultado = suma;

	printf("El resultado de %c es: %d", operacion, resultado);

	} else if(operacion == 'r') {

	resta = restar(num1, num2);
	resultado = resta;

	printf("El resultado de %c es: %d", operacion, resultado);


	} else if(operacion == 'm'){

	multiplicacion = multiplicar(num1, num2);
	resultado = multiplicacion;

	printf("El resultado de %c es: %d", operacion, resultado);


	} else {

	division = dividir(num1, num2);
	resultado = division;

	printf("El resultado de %c es: %d", operacion, resultado);


	}

}

int multiplicar(int valor1, int valor2){

	int resultado;

	resultado = valor1 * valor2;

	return resultado;

}

int dividir(int valor1, int valor2){

	int resultado;

	resultado = valor1 / valor2;

	return resultado;

}

int sumar(int valor1, int valor2){

	int resultado;

	resultado = valor1 + valor2;

	return resultado;

}

int restar(int valor1, int valor2){

	int resultado;

	resultado = valor1 - valor2;

	return resultado;

}
