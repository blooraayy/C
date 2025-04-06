#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mediaFila(int *matriz [3] [4], int fila, int columna); //*cambio

int main() {

    int fila, columna, *matriz [3] [4];
    matriz [3] [4] = (int*)malloc(sizeof(int)*fila*columna);
    srand(time(0));
    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            *(matriz [3] [4] + fila * 4 + columna) = rand() % 100 + 1; //*cambio  
        }
    }
    
    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            printf("%d\t", *(matriz [3] [4] + fila * 4 + columna)); //*cambio
        }
        printf("\n"); 
    }

    mediaFila(matriz, fila, columna);

return 0;

}

int mediaFila(int *matriz[3] [4], int fila, int columna) { //*cambio

    int sum = 0;
    int media = 0;

    for(fila = 0; fila < 3; fila++) {
        for(columna = 0; columna < 4; columna++) {
            sum = sum + *(matriz[fila] [columna] + fila * 4 + columna); //*cambio
        }

    media = sum / 4;
    printf("La media de la fila es %d\n", media);
    sum = 0;
    }

return media;

}