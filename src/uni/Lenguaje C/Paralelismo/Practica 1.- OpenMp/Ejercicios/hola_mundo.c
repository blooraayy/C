#include <stdio.h>
#include <omp.h>

int main() {
    
    int tid, num_threads;

    #pragma omp parallel num_threads(4) shared(num_threads) private(tid) 
    { //seccion paralela

        tid = omp_get_thread_num();
        num_threads = omp_get_num_threads();
        printf("Hola desde el thread %d con %d hilos\n", tid, num_threads);
    }

    return 0;

}