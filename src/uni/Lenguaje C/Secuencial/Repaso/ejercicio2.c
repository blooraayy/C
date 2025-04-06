#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int copia(char cadena_1[100], char cadena_2[100], char c);

int main() {

    char cadena [100];
    char l;
    int f, c;

    fgets(cadena, 100, stdin);

    scanf("%c", &l);
    scanf("%d", &f);
    scanf("%d", &c);

    if (l < 97 && l > 122) {
        //
    }

    if (f > 0 && c > 0 && f % 4 != 0 && c % 4 != 0) {
        //
    }
    char cadena_aux[100];
    int r1 = copia(cadena, cadena_aux, l);
    printf("%d, %s", r1, cadena_aux);

    int *matriz = (int *)malloc(f * c * sizeof(int));
}

int copia(char cadena_1[100], char cadena_2[100], char c) {

    int result = 0, i;

    for(i = 0; i < strlen(cadena_1); i++) {
        if (cadena_1[i] == c) {
            cadena_2[i] = "X";
            result++;
        }
        else {
            cadena_2[i] = cadena_1[i];
        }
    }

return result;

}