#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para inicializar la matriz con números aleatorios entre 1 y 10
void inicializamatriz(int *matriz, int filas, int columnas) {
    srand(time(NULL));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i * columnas + j] = rand() % 10 + 1; // Números aleatorios entre 1 y 10
        }
    }
}

// Función para calcular el mínimo de una matriz
int calculaminimo(int *matriz, int filas, int columnas) {
    int minimo = matriz[0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i * columnas + j] < minimo) {
                minimo = matriz[i * columnas + j];
            }
        }
    }

    return minimo;
}

int main() {
    int n, m;

    // Leer el número de filas y columnas
    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    // Reservar memoria para la matriz como un array de arrays
    int *matriz = (int *)malloc(n * m * sizeof(int));

    // Inicializar la matriz con números aleatorios
    inicializamatriz(matriz, n, m);

    // Calcular el mínimo utilizando la función calculaminimo
    int minimo = calculaminimo(matriz, n, m);

    // Imprimir el resultado
    printf("El valor mínimo es: %d\n", minimo);

    // Imprimir la matriz de números
    printf("La matriz de números es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i * m + j]);
        }
        printf("\n");
    }

    // Liberar la memoria reservada para la matriz
    free(matriz);

    return 0;
}