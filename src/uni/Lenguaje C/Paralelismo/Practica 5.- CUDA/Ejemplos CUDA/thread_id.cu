#include <stdio.h>

__global__ void cuda_hello()
{
    printf("Hello World from thread %d %d\n", threadIdx.x, threadIdx.y);
}

int main()
{
    dim3 threadsPerBlock(3, 3);
    cuda_hello<<<1, threadsPerBlock>>>();
    cudaDeviceSynchronize();
    return 0;
}
