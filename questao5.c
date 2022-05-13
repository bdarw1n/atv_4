#include <stdio.h>

void swap (int *a, int *b){
if (*a < *b ){
 int *aux = *a;
 *a = *b;
 *b  = aux;
}

}


int main () {
int a = 10, b  = 20;
swap(&a, &b);
return printf ("a = %d b = %d ", a, b);

}
