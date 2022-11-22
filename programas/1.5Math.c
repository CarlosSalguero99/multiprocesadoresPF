#include <stdio.h> 
#include <omp.h> 
#include <math.h> 
FILE *fptr; 
 
int main() { 
  int N = 120000; 
  fptr=fopen("RAM.txt","w"); 
  printf("Numero de pasos:%d \n", N); 
  fprintf(fptr,  "Datos  que  encuentra  el  metodo  de  Euler(variable  ind.\t  variable  dep.\t  numero  de thread)\n"); 
      double h,t[N],w[N],ab; 
      double w0=0.5,a=0,b=2; 
      int i; 
      const double startTime = omp_get_wtime(); 
      #pragma omp parallel 
      fprintf(fptr, "%f\t %f\n", a, w[i]); 
      h=(b-a)/N; 
      w[0] = w0; 
      t[0] = a; 
      for(i=0;i<N;i++){ 
          t[i]=a+(h*i); 
          w[i]=w[i-1]+h*(1+t[i-1]*t[i-1]-w[i-1]); 
      } 
      const double endTime = omp_get_wtime(); 
      printf("tomo (%lf) segundos\n", (endTime - startTime)); 
      for(i=0;i<N;i++){ 
          fprintf(fptr, "%f\t %f\n", t[i], w[i]); 
      } 
  fclose(fptr); 
} 