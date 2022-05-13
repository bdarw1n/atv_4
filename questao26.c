#include <stdio.h>
#include <math.h>

float raizes (float A, float B, float C, float *X1, float *X2){
float d = pow(B,2) - 4 * A * C;
*X1 =(-B  + sqrt(d)) / 2 * A;
*X2 =(-B  - sqrt(d)) / 2 * A;
return d;
}




int main () {
float A, B, C;
printf("valor de A: "); scanf("%f", &A);
printf("\n");
if(A  == 0 ){
   printf("Valor de A não pode ser zero.");
   printf("\n\n");
   main();
}
printf("valor de B: "); scanf("%f", &B);
printf("\n");
printf("valor de C: "); scanf("%f", &C);
printf("\n");
float  X1, X2;
float R  = raizes (A, B, C, &X1, &X2);
if(R < 0) {
    return printf(" Esta equação não possui raízes.");

}  else if (R == 0){
   return printf("Valor da raiz: %2.2f", X1);
}else {
  printf("Raiz 1: %2.2f   Raiz 2: %2.2f.", X1, X2);

}

}

