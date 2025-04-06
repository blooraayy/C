//Programa al que se le pasan una cadena y un numero como argumentos.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//La funcion main leerá otra cadena de máxino 100 caracteres por TECLADO

int main(int argc, char *argv[]) {

    //declarar las variables, reservar espacio y leer cadena por entrada estándar
    
    char *cadena_teclado;
    cadena_teclado = (char *)malloc(sizeof(char)*100);
    fgets(cadena_teclado, 100, stdin); //cadena introducida, tamaño, stdin

    //Caluclar la longitud de la cadena introducida por teclado y mostrarla por pantalla

    int tamanio = strlen(cadena_teclado); //longitud de la cadena
    printf("La longitud de la cadena es de %d carácteres\n", tamanio);

    //concatenar la cadena

    

return 0;

}