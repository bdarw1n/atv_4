#include <stdio.h>
#include <stdlib.h>




int main () {

float array[5];
float *v =  malloc (5 * (sizeof(float)));
v = &array;


for (int i = 0;i < 10; i++){
    printf("%d", &v[i]);
    printf("\n");

}
return 0;
}
