#include <stdio.h>
int suma_n (int num);
int main () {
    
    int num, total, i;

    printf("Escribe cuantos números quieres sumar\n");
    scanf("%d", &num);

    suma_n(num);

return 0; 

}

//Introducir las operaciones del programa originales en una funcion aparte

int suma_n (int num) {

    int total = 0;
    int i = 1;

    if (num >= 1) {

        while (i <= num) {


             total = total + i;
             i = i + 1;
        }

        printf("La suma total es: %d\n", total);
        
    }    
    
    else {
        printf("El número ha de ser mayor o igual que 1\n");
        
    }

return num;

}