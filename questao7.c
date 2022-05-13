#include <stdio.h>

void fun (int *a, int *b) {
 *a = a + b;

}



int main () {
int a =10, b =15;

fun (&a,&b);

return a;
}
