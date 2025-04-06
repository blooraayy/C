#include <stdio.h>
int main() {
    //Este programa convierte una nota numerica a su calificacion correspondiente

    int nota;

    printf("Escribe la nota:\n");
    scanf("%d", &nota);

    //Comprobar que nota es para imprimir la cadena correspondiente

    if (nota < 0) {
        printf("Valor no válido\n");
    } 
    else if (nota > 10) {
        printf("Valor no válido\n");
    }
    else if (nota >=5){
        printf("Aprobado\n");
    }
    else {
        printf("Suspenso\n");
    }
    //Fin del programa
return 0;
}
