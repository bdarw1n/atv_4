#include <stdio.h>

void  fun (int n, int *a, int *cntg, int *max){
 for(int i = 0; i < n; i++){
    if(*max < a[i]){
        *max = a[i];
    }
 }
  *cntg = 0;
  for(int i = 0; i < n; i++){
    if(*max == a[i]){*cntg = *cntg + 1;}
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
int max = 0;
fun(n, a, &cntg, &max);

return printf("Maior número: %d\nAparece %d vezes.", max, cntg);
}
