#include <stdio.h>


void fun (int a, int v[]){

int *ptr = &v[0];
*ptr = a;
printf("%d\n", v[0]);
ptr++;
*ptr= a;
printf("%d\n", v[1]);
ptr++;
*ptr= a;
printf("%d\n", v[2]);
}



int main () {
int v[3];
int a=10;
fun (a, v);
return 0;
}
