#include <stdio.h>
#include <string.h>
#include <stdlib.h> //libreria necesaria al utilizar puntero

int main() {

	int i;
	char letra;
	char copia [100];
	char cadena [100]; //Declarar cadena caracteres
	char *puntero; //Declaramos puntero a una cadena
	puntero = (char *)malloc(sizeof(char)*100);

	//Elegir una de las dos formas
	scanf("%s", &cadena); //leer palabra hasta el primer espacio
	fgets(cadena, 100, stdin); //leer una cadena

	//Opcion 1
	for(i = 0; cadena[i] != '\0'; i++) { //'a': comillas simples para poner solo un caracter
		letra = cadena[i];
		printf("%c", letra);

	} 

	//opcion 2
	printf("%s", cadena);

 	//copiar cadenas
 	strcpy(copia, cadena);
	strncpy(copia, cadena, 5); //copia 5 caracteres de cadena en copia

	int compara = strcmp(copia, cadena)//comparara para saber si son iguales o son distintas
	if (compara == 0) {
		printf("Cadenas iguales\n");
	} 
	
	else {
		printf("Cadenas distintas\n")
	}

	//Concatenar cadenas
	strcat(cadena, copia); //concatenar cadenas; cadena = cadena + copia: cadena = "Hola"; copia = "mundo" == cadena "Holamundo"; copia = "mundo"

	int tamanio = strlen(cadena); //Devuelve el tamaño de la cadena
	printf("El tamaño de cadena es %d\n", tamanio);

	//Saber si hay una cadena dentro de otra cadena buscandola

	char *subcadena = strshr(cadena, copia);//la funcion devuelve un puntero si la cadena se encuentra en la primera de ellas
	if (subcadena == NULL) {
		printf("No está la subcadena\n");
	}
	else {
		printf("%s", subcadena)
	}

	char delimitadores = ".";
	char *cadenanueva = strtok(cadena, delimitadores);
	printf("%s", cadenanueva);

return 0;

}
