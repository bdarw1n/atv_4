#include <stdio.h>



int main (){
int a; int b;
int *pa = &a;
int *pb = &b;

if (pa > pb){return printf ("%d > %d", pa, pb);}
return printf ("%d > %d", pb, pa);
}
