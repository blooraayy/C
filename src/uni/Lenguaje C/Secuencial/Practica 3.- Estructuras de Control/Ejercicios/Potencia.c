#include <stdio.h>
int main() {
    //Este programa calcula la potencia de un número

    //Declarar variables de la funcion

    int base, exponente, pot;

    //Registrar el numero de la base
    printf("Introduzca la base: ");
    scanf("%d", &base); //Guarda el numero leido en la variable base

    //Registrar el exponente
    printf("Introduzca el exponente: ");
    scanf("%d", &exponente); //Guarda el numero leido en la variable exponente

    //Comprobar que la base y el exponente sean mayores que 1
    if ((base >= 1) || (exponente >= 1)) {
        //si se cumple iniciar las variables
        //Consiste en un bucle que multiplica la base el numero de veces que indique el exponente, al cual se le ira restando 1 cada vez que termine el bucle hasta que llegue a cero
        pot = 1;
        while(exponente >= 1) {
            pot = pot * base;
            exponente = exponente - 1;
        }
        printf("La potencia es %d\n", pot);
    }
    else {
        printf("La base y el exponente han de ser mayores o iguales a 1\n");
    }

return 0;
} 