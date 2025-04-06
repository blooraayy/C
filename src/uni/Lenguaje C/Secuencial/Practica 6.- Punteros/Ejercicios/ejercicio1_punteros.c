//crea un programa que pida al usuario introducir 10 numeros por entrada estandar, los guarde en un vector y los sume

#include <stdio.h>

void inicializa(int *p, int n);
int suma_elementos(int*p, int n);

int main() {
	int n;
	scanf("%d", &n);
	int *vector;
	vector = (int*)malloc(sizeof(int)*n);
	
	inicializa(vector, n);
	
	int total;
	total = suma_elementos(vector, n);
	printf("El valor total es %d\n", total);
	free(vector, n);

return 0;
}

void inicializa(int *p, int n) {
	int i;
	int valor;
	for(i = 0; i < n; i++) {
	scanf("%d", &valor);
	*(p+i) = valor;
	}
}

int suma_elementos(int *p, int n) {
	int i, suma;
	suma = 0; //inicia el contador
	for (i = 0; i < n; i++) {
	suma = suma + *(p+i);
	}

return suma;
}