#include <stdio.h>

void imprimir(int a[])
{
    int *ptr = &a[0];
   for (int i = 0; i < 5; i++){
       printf("%d",  *ptr);
       ptr++;
   }
}


int main () {
int a[5] = {1,2,3,4,5};
imprimir(a);



}
