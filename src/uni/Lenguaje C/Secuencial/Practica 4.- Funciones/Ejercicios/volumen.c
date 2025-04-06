/* Realice un programa volumen.c en lenguaje C que calcule volúmenes de figuras geométricas. 
Para ello la función main llamará a una función menu que presenta un menú para saber si se quiere calcular el volumen de un cono (1)
o el volumen de ortoedro (2) o salir (3). Si la opción no es 1 ó 2 ó 3 da un mensaje de error y los vuelve a pedir hasta que sea  un valor correcto. 
Cuando sea correcto, la función menu devuelve ese resultado. La función main según el valor que recibe de la función menu, leerá los valores correspondientes 
para calcular el volumen del cono o del ortoedro. Después, con esos valores, llamará a la función volumen_cono o volumen_ortoedro que dados esos valores
que recibe como argumentos, devuelve el volumen del cono o del ortoedro, respectivamente.*/

// Librerias
#include <stdio.h>

// Prototipos
int menu(int opcion);

// Main
int main() {

    int opcion, selecccion;

    selecccion = menu(opcion);

    if (opcion == 1) {
        // Llamada
    }
    else if (opcion == 2) {
        //
    }
    

    return 0;
}

int menu(int opcion) {

    printf("Seleccione una opción:\n 1 - Volumen Cono\n 2 - Volumen Ortoedro\n 3 - Salir\n");
    scanf("%d", &opcion);

    while (0 < opcion < 4) {
        printf("Entrada incorrecta, vuelva a intentarlo:");
        scanf("d", &opcion);
    }
}

int VolumenCono() {

}

int VolumenOrtoedro() {
    
}