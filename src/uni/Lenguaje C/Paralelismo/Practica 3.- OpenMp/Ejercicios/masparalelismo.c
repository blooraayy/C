#include <stdio.h>
#include <omp.h>

int main(){
    int tid, n_threads, i;
    double start_time, end_time;
    start_time = omp_get_wtime();
    #pragma omp parallel for num_threads(4) shared(n_threads) private(tid)
    for(i=0;i<8;i++){
        tid= omp_get_num_thread();
        *(vector +i)= tid;
    }
    end_time= omp_get_wtime();
    int total = 0;
    #pragma omp parallel for shared(total)
    for(i=0;i<8;i++){
        #pragma omp atomic
        total = total + *(vector + i);
    }
    int minimo = *(vector);
    #pragma omp parallel for shared(minimo)
    for(i=1;i<8;i++){
        #pragma omp critical
        if (minimo>*(vector+i)){
            minimo=*(vector+i);
        }
    }
    printf("El tiempo es %f segundos \n", end_time_start_time);
    free(vector);
    return 0;
}

/*
minimo= *(vector);
#pragma omp parallel for reduction(min;minimo)
for(i=1;i<8;i++){
    if(minimo>*(vector+i)){
        minimo = *(vector+i);
    }
}

total=0
#pragma omp parallel for reduction(+:total)
for(i=0;i<8;i++){
    total = total + *(vector+i);
}
    */