#include <stdio.h>

// Definición de una función de kernel CUDA
__global__ void cuda_hello()
{
    // Impresión de un mensaje desde el kernel
    printf("Hello World from GPU!\n");
}

// Función principal
int main()
{
    // Llamada al kernel con una configuración de 1 bloque y 1 hilo
    cuda_hello<<<1, 1>>>();

    // Sincronización del dispositivo para asegurarse de que todos los kernels hayan terminado
    cudaDeviceSynchronize();

    return 0;
}