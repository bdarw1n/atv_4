#include <stdio.h>
///
int sum (int *a, int *b){
*a = 2 * (*a);
*b = 2 * (*a);
return  *a + *b;
}
///
int main () {
int a = 10, b  = 20;
int c = sum(&a, &b);
return  printf("%d", c);
}
