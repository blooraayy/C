#include <stdio.h>

int main () {
    
    //Declarar las variables
    int num, total, i;

    printf("Escribe cuantos números quieres sumar\n");
    scanf("%d", &num);

    //Inicializar las variables
    total = 0;
    i = 1;

    //Comprobar si el numero introducido es meyor o igual que 1
    if (num >= 1) {

        //Hacer el bucle para sumar hasta que i valga n
        while (i <= num) {

            //Calcular la suma parcial
             total = total + i;
             i = i + 1;
        }

        printf("La suma total es: %d\n", total);  
    }    
    
    else {
        printf("El número ha de ser mayor o igual que 1\n"); 
    }   

return 0;

}