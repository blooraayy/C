#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int *vector; //el * se utiliza para pasar de un entero a un puntero
	vector = (int*)malloc(sizeof(int)*n); //malloc = reserva de memoria; sizeof(int) = que ocupe 1 int o entero
	for (i = 0; i < n; i++) {
		*(vector + i) = 10;
	}

	free(vector); //liberar la memoria

return 0;
}