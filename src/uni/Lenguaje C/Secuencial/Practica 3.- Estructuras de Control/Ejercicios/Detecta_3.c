#include <stdio.h>
int main (){

    //Este programa indica si el numero leido popr el teclado es 3

    //Declarar las  variables de mi funcion
    int num;

    //Sustituir la funcion ESCRIBA "cadena" por printf
    printf("Escribe un número:");

    //Sustituir la funcion LEA num por scanf("%d", &variableEntera)
    scanf("%d", &num); //Guarda el numero leido en la variable

    //Comprobar si el numero introducido es 3
    if (num == 3){
        printf("El número introducido es el 3\n");
    }
    else {
        printf("El número introducido no es el 3\n");
    }
//Fin del programa
return 0;

}