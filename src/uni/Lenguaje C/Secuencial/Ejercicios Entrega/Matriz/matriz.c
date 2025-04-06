#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float mediaFila(int matriz[3] [4], int fila, int columna);

int main() {

    int fila, columna, matriz [3] [4];
    srand(time(0)); //funcion que genera los numeros aleatorios
    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            //insertar los numeros en la matriz y rand rellena con numeros aleatorios
            //Con el modulo conseguiremos un numero entre 1 y 100: se suma el 1 para que nunca de 0
            matriz [fila] [columna] = rand() % 100 + 1;  
        }
    }
    //bucle anidado para imprimir la matriz
    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            printf("%d\t", matriz [fila] [columna]); // \t lo que hace es dejar una tabulación entre cada columna de la matriz
        }
        printf("\n"); // \n al acabar de imprimir las filas, cambiara de linea para rellenar la siguiente columna
    }

    mediaFila(matriz, fila, columna);

return 0;

}

float mediaFila(int matriz[3] [4], int fila, int columna) {

    float sum = 0;
    float media = 0;

    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            sum = sum + matriz[fila] [columna];
        }

    media = sum / 4;
    printf("La media de la fila es %0.2f\n", media);
    sum = 0; //si no se reinicia la variable suma, cada vez que acabe una iteración del bucle de las filas, la suma de la siguiente fila será la suma de las anteriores
    }

return media;

}