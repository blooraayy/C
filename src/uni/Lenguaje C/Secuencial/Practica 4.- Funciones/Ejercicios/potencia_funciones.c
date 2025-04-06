#include <stdio.h>

int main() {
    //Este programa calcula la potencia de un número

    //Declararnlas variables de la funcion

    int base, exponente;

    //Registrar el numero de la base
    printf("Introduce la base:\n ");
    scanf("%d", &base); // Guarda el numero leido en la variable base

    //Registrar el exponente
    printf("Introduce el exponente:\n ");
    scanf("%d", &exponente); //Guarda el numero leido en la variable exponente

    potencia(base, exponente); //No se porque hay que poner esto pero es necesario
            
return 0;        
    
}
//Introducir las operaciones del programa original dentro de una funcion separada de la original
int potencia (int base, int exponente) {
if ((base >= 1) || (exponente >= 1)) {
        
        int potencia = 1;
        while(exponente >= 1) {
            potencia = potencia * base;
            exponente = exponente - 1;
        }
            printf("La potencia es: %d\n", potencia);
    }
    else {
        printf("La base y el exponente han de ser mayores o iguales a 1\n");
    }
            
return potencia;

}