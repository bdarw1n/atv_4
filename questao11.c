#include <stdio.h>
#include <math.h>



int main () {

int array[5];
int cnt = 1;
for(int i = 0; i < 5; i++){
  printf("digite o %dº valor: ", cnt);scanf("%d", &array[i]);printf("\n");
  cnt ++;
}

printf("\n\n\n");
for(int i = 0; i < 5; i++){
    if ( (array[i] % 2) == 0 ) {
    printf("%d", &array[i]);printf("\n");
    }
}
return 0;
}
