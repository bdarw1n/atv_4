#include <stdio.h>

void medias(float *a, float *b){
printf ("M�dia aritim�tica: %2.2f\nM�dia ponderada: %2.2f", (*a + *b)/2, (*a + (*b * 2 ))/3 );

}



int main () {
float a, b;
printf ("primeira nota: ");
scanf("%f",&a);
printf("\n");
printf ("primeira nota: ");
scanf("%f",&b);
printf("\n");
medias (&a, &b);

return 0;
}
