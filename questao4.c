#include <stdio.h>

void swap (int *a, int *b){
int *aux;
aux = *a;
*a = *b;
*b  = aux;
}

int main (){
int a = 10, b = 15;
swap (&a, &b);
return printf ("a = %d  b = %d ", a, b);

}
