/* 
a. La función main lee una cadena de máximo 100 caracteres, una letra l, y 4 números enteros a, b, c y d.
Los números leídos han de ser apropiados para el resto de funcionalidades del programa (si no, se volverán a leer hasta que lo sean).
Además, llamará a las funciones que realizan las tareas descritas en los puntos siguientes y, después, imprimirá los resultados.

b. Ha de tener una función init_matrix que inicialice una matriz de tamaño a*b con números aleatorios entre 5 y 20.

c. Ha de tener una función compute_solution que, considerando una matriz a*b que recibe como argumento, devuelve la suma de aquellos elementos
que están en las columnas cuyo índice sea mayor o igual a "c" y menor o igual a "d"; estos valores también se pasan como argumento y son los que
han sido previamente leídos en la función principal. NOTA: el índice corresponde con la variable usada para acceder a esa columna.

d. Ha de tener una función procesa_cadena que inicializa una cadena con las letras de una cadena previamente leída en la función principal,
la cual se pasa como argumento. La cadena resultante difiere en que las letras ‘a’ de la cadena original que estén entre las posiciones c y d
(valores leídos en la función principal) se sustituyen por el carácter l también leído en la función principal.

e. No se pueden utilizar variables globales.

f. Hay que utilizar punteros para la gestión de la matriz.
*/

// Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Prototipos
void init_matrix(int a, int b, int *m);
int compute_solution(int *m, int a, int b, int c, int d);
void procesa_cadena(char cadena_origen[], char cadena_destino[], char l, int c, int d);

// Main
int main() {

    char cadena_origen[100], cadena_destino[100], l;
    int a, b, c, d, *m, suma;

    // Leer los datos pedidos
    fgets(cadena_origen, 100, stdin);
    scanf("%c", &l);
    scanf("%d", &a);
    while (a < 0)   {
        scanf("%d", &a);
    }
    scanf("%d", &b);
    while (b < 0) {
        scanf("%d", &b);
    }
    scanf("%d", &c);
    while (c < 0) {
        scanf("%d", &c);
    }
    scanf("%d", &d);
    while (d < 0) {
        scanf("%d", &d);
    }

    // Reservar memoria
    m = (int *)malloc(a * b * sizeof(int));

    // Llamadas a funciones
    init_matrix(a, b, *m);
    suma = compute_solution(*m, a, b, c, d);
    procesa_cadena(cadena_origen, cadena_destino, l, c, d);

    // Imprimir los resultados
    printf("%d", suma);
    // Liberar memoria
    free(m);

    return 0;
}

// Funcion 1
void init_matrix(int a, int b, int *m) {

    int i, j;

    srand(time(NULL));

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            *(m + i * b + j) = rand() % 16 + 5;
        }
    }
}

// Funcion 2
int compute_solution(int *m, int a, int b, int c, int d) {

    int i, j, sum;

    sum = 0;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (j >= c && j <= d) {
                sum += *(m + i * b + j);
            }
        }
    }

    return sum;
}

// Funcion 3
void procesa_cadena(char cadena_origen[], char cadena_destino[], char l, int c, int d) {

    int i;

    strcpy(cadena_destino, cadena_origen);

    for (i = c; i <= d; i++) {
        if (cadena_origen[i] == 'a') {
            cadena_destino[i] = l;
        }
    } 

}