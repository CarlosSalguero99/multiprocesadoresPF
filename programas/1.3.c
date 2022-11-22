#include<stdio.h>
#include "omp.h"
#define NUM_THREADS 18

int main(){
	double t1, t2, tiempo;
	const double startTime = omp_get_wtime();
	t1 = omp_get_wtime();
	omp_set_num_threads(NUM_THREADS);
	#pragma omp parallel
	{
		int ID = omp_get_thread_num();
		printf("Procesadores(%d)", ID);
		printf("Multiples(%d)", ID);
		printf("en accion(%d) --- %d\n", ID, ID);
	}
t2=omp_get_wtime();
tiempo=t2-t1;
printf("\nTomo (%lf) segundos\n", tiempo);
}
