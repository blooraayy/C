#include <stdio.h> 
int main() {

    int nota;

    printf("Escribe una nota númerica: \n");
    scanf("%d", &nota);

    //Compruebo que nota es para imprimir la cadena correspondiente
    if (nota >= 0 || nota > 10) {
        switch (nota) {

            //Imprimo si la nota es un 5 o 6
        
            case 5:
            case 6: 
        
            printf("Aprobado\n");
            break; //Sale del switch porque ya encontró un caso

            case 7:
            case 8:

            printf("Notable\n");
            break;

            case 9:
            case 10:

            printf("Sobresaliente\n");
            break;

            //Si no es ningún de los valores anteriores, "Suspenso"

            default:
                    printf("Suspenso\n");
        }
    }

return 0;

}