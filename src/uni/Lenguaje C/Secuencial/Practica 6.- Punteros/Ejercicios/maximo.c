#include <stdio.h>
#include <stdlib.h>

// Función para calcular el máximo de un conjunto de números
int calculaMaximo(int *numeros, int n) {
    int maximo = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    return maximo;
}

int main() {
    int n;

    // Leer el número de enteros
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    // Reservar memoria para el array de enteros
    int *numeros = (int *)malloc(n * sizeof(int));

    // Leer los n enteros por teclado
    printf("Ingrese los %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcular el máximo utilizando la función calculaMaximo
    int maximo = calculaMaximo(numeros, n);

    // Imprimir el resultado
    printf("El valor máximo es: %d\n", maximo);

    // Imprimir los números leídos
    printf("Los números ingresados son: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Liberar la memoria reservada
    free(numeros);

    return 0;
}