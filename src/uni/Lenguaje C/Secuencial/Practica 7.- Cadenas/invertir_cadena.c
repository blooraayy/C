#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void invierte(char *cadena_origin, char *cadena_destino);

int main() {

	//declarar cadenas y reservar espacio
	char *cadena1, *cadena2;
	cadena1 = (char *)malloc(sizeof(char)*100);
	cadena2 = (char *)malloc(sizeof(char)*100);
	fgets(cadena1, cadena2); //fgets lee la cadena por entrada estandar y la almacena con str
	printf("La cadena invierte es %s\n", cadena2);

return 0;

}

void invierte(char *cadena_origin, char *cadena_destino) {
	
	//determinar la longitud de la cadena
	int longitud = 0;
	while(cadena_origin[longitud] != '\0') {
		longitud++;
	}

	//invertir la cadena mediane un bucle que recorre la cadena origen, resta las posiciones y coloca las letras en el lugar invetido
	for (i = 0; i < longitud; i++) {
		cadena_destino[i] = cadena_origin[longitud - i - 1];
	}
	
	cadena_destino[longitud] = '\0';

}

//EJERCICIO 2 NOTA: hay que hacerlo con punteros al utilizar scanf para leer el tamaño hay que poner: while(getchar() !='\n'); fgets(cadena, tamaño, stdin);