#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int vector[10]); //array es el nombre de la variable 
int suma_vector(int vector[10]);

int main() {

    srand(time(NULL));
    int vector[10];
    inicializa(vector);

    int i;
    for (i = 0; i <10; i++) {
        printf("%d", vector[i]);
    }
    printf("\n");

return 0;

}

void inicializa(int vector[10]) {
    int i;
    for (i = 0; i <10; i++) {
        vector[i] = rand() % 10 + 1;
    }
}

int suma_vector(int vector[10]) {}

    int i;
    int suma;
    for (i = 0; i < 10; i++) {
        suma += vector[i];
    
    printf("La suma total es" "%d", suma)
    }

    suma = suma + vector[i]