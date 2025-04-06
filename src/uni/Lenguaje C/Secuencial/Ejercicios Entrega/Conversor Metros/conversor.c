#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu (int option);
float inches_to_meters(float num);
float feets_to_meters(float num);
float yards_to_meters(float num);
float miles_to_meters(float num);

int main() {

    int num;
    menu(num);

return 0;

}

void menu(int option) {

    float num = 0;
    printf("Elija que unidad desea convertir\n 1- Pulgadas a metros\n 2- Pies a metros\n 3- Yardas a metros\n 4- Millas a metros\n 5- Salir del programa\n");
    scanf("%d", &option);
    //Bucle para las diferentes opciones
    
    while (option <= 0 || option >= 6) {
            printf("Opcion no valida, intentelo de nuevo\n");
            scanf("%d", &option);
    }    
    if (option == 1) {
        inches_to_meters(num);
    }
    else if (option == 2) {
        feets_to_meters(num);
    }
    else if (option == 3) {
        yards_to_meters(num);
    }
    else if (option == 4) {
        miles_to_meters(num);
    }
    else {
        printf("Gracias por utilizar el programa!");
    }
        
}
        
float inches_to_meters(float num) {

    printf("Introduzca las pulgadas a convertir: ");
    scanf("%f", &num);
    num = num * 0.0254;
    printf("Las pulgadas introducidas son %0.2f metros\n",num);
    menu(num);

return num;

}

float feets_to_meters(float num) {

    printf("Introduzca los pies a convertir: ");
    scanf("%f", &num);
    num = num * 0.3048;
    printf("Los pies introducidos son %0.2f metros\n", num);
    menu(num);

return num;

} 

float yards_to_meters(float num) {

    printf("Introduzca las yardas a convertir: ");
    scanf("%f", &num);
    num = num * 0.9144;
    printf("Las yardas introducidas son %0.2f metros\n", num);
    menu(num);

return num;

}

float miles_to_meters(float num) {

    printf("Introduzca las millas a convertir: ");
    scanf("%f", &num);
    num = num * 1609.344;
    printf("Las millas introducidas son %0.2f metros\n", num);
    menu(num);

return num;

}