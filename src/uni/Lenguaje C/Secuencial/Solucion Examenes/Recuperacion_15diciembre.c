//Solucion del ejercicio del examen de recuperacion del dia 15 de diciembre

//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Prototipos de funciones
void init_matrix(int fil, int col, int num, int *m);
int compute_solution(int fil, int col, int num, int *m);
void procesa_cadena(int num, char l, char cadena_origen[], char cadena_destino[]);

// Main
int main() {

    // Declarar variables
    char cadena_origen[100], cadena_destino[100], l;
    int *m, fil, col, num, i, j;
    int product;

    // Leer los datos
    fgets(cadena_origen, 100, stdin);
    scanf("%s", &l);
    scanf("%d", &fil);
    while (fil <= 0){ 
        scanf("%d", &fil);
    }
    scanf("%d", &col);
    while (col <= 0){ 
        scanf("%d", &col);
    }
    scanf("%d", &num);
    while (num <= 0){ 
        scanf("%d", &num);
    }

    //Reservar memoria puntero
    m = (int*)malloc(fil*col*sizeof(int));


    // Llamadas de funcione
    init_matrix(fil, col, num, m);
    product = compute_solution(fil, col, num, m);
    procesa_cadena(num, l, cadena_origen, cadena_destino);

    // Imprimir los resultados
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", *(m + i * col + j));
        }
        printf("\n");  // Salto de línea después de cada fila
    }
    printf("%d\n", product);
    printf("%s\n", cadena_destino);

    // Liberar memoria
    free(m);

    return 0;
}

// Funcion 1: inicializar matriz fil*col y rellenarla mediante numeros aleatorios
void init_matrix(int fil, int col, int num, int *m) {

    // Inicializar variables privadas para los bucles
    int i, j;

    // Inicializar los numeros aleatorios
    srand(time(NULL));

    // Inicializar la matriz mediante numeros aleatorios entre 5 y 15
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            *(m + i * col + j) = rand() % 11 + 5;
        }       
    } 
}

// Funcion 2: Multiplicar los numeros de aquellas posiciones cuyos indices sean menores que num
int compute_solution(int fil, int col, int num, int *m) {

    // Inicializar variables 
    int i, j, p;

    // Inicicar contador
    p = 1;
   
    // Comprobar la condicion y operar en caso adecuado
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            if (i < num && j < num) {
                p *= *(m + i * col + j);
            }
        }
    }

    return p;
}

// Funcion 3: inicializa una cadena destino con el contenido de la origen, con el cambio de las letras 'p' que se encuentren en las posiciones < num, las cuales se sutituyen por la letra leida leida l
void procesa_cadena(int num, char l, char cadena_origen[], char cadena_destino[]) {

    // Inicializar las variables
    int i;

    // Copiar el contenido de cadena_origen en cadena_destino
    strcpy(cadena_destino, cadena_origen);

    // Modificar cadena_destino según las condiciones
    for (i = 0; i < num && i < strlen(cadena_origen); i++) {
        if (cadena_destino[i] == 'p') {
            cadena_destino[i] = l;
        }
    }
}