//crea un programa que pida al usuario introducir 10 numeros por entrada estandar, los guarde en un vector y los sume

#include <stdio.h>
#define n 10

void inicializa(int vector[n]);
int suma_elementos(int vector[n]);

int main() {
	int array[n]; // Declarar variable vector
	
	inicializa(array);
	
	int total;
	total = suma_elementos(array);
	printf("El valor total es %d\n", total);
 
return 0;
}

void inicializa(int vector[n]) {
	int i;
	int valor;
	for(i = 0; i < n; i++) {
	scanf("%d", &valor);
	vector[i] = valor;
	}
}

int suma_elementos(int vector[n]) {
	int i, suma;
	suma = 0; //inicia el contador
	for (i = 0; i < n; i++) {
	suma = suma + vector[i];
	}

return suma;
}
