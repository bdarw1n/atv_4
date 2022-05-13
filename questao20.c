#include <stdio.h>

void  fun (int n, int *a, int *cntg){
  *cntg = 0;
  for(int i = 0; i < n; i++){
    if(a[i]< 0){*cntg = *cntg + 1;}
  }
}

int  main () {
int n;
printf("a quantidade de elementos da array: ");
scanf("%d", &n);
printf("\n\n");
int a[n];
int cntg = 1;
for (int i = 0 ; i < n ; i++){
    printf("digite o %dº elemento da array: ", cntg);
    scanf("%d", &a[i]);
    printf("\n");
    cntg++;
}

fun(n, a, &cntg);

return printf("Quantidade de números negativos: %d", cntg);
}

