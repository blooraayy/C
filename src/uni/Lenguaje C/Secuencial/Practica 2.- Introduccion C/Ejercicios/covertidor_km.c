#include <stdio.h>

int main() {
    
	//Algoritmo Conversión

    float Km;
    float Millas;
    float Yardas;
    float Pies;

    printf("Escribe un numero en kilometros:\n");
    scanf("%f", &Km); //Escanea el numero introducido por entrada estandar

    //Operaciones a realizar para cada unidad
    Millas = Km /1.60;
    Pies = Km * 100000 / 30.48;
    Yardas = Km * 100000 / 91.44;
    
    printf("Las millas son: %f\n", Millas);
    printf("Las Yardas son: %f\n", Yardas);
    printf("Los Pies son: %f\n", Pies);

return 0;

}    