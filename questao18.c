#include <stdio.h>
#include <math.h>

void calcular ( float p, float R, float *V, float *A) {
  *A = 4 * p * (pow(R, 2));
  *V = (4 * p * (pow(R, 3))) / 3;
}



int main () {
float p = 3.14;
float A, V, R;
printf("Raio da esfera: ");
scanf("%f", &R);
printf("\n\n");
calcular(p, R, &V, &A);


return printf("A: %2.2f    V: %2.2f", A, V);
}
