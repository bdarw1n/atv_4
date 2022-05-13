#include <stdio.h>

void preencher(int *a, int b){
int cnt =1;
for (int i = 0; i<b; i++){
   printf( "Digite o %dº valor desta array: ", cnt);
   scanf("%d", &a[i]);
   printf("\n");
   cnt++;
}
}

int somar (int *a, int b, int*c, int d, int *e){
    if (b != d){
        return 1;
    }
   for(int i = 0; i < b; i++){
    e[i] = a[i] + c[i];
   }

return 0;
}

int main () {
int b;
printf("Quantidade de elementos da primeira array: ");
scanf("%d", &b);
printf("\n");
int a[b];
preencher(a, b);
int d;
printf("Quantidade de elementos da segunda array: ");
scanf("%d", &d);
printf("\n");
int c[d];
preencher(c,d);
int f = b;
int e[f];
int r =  somar(a,b,c,d, e);
printf("\n\n\n");
if(r  == 1) {
    printf("Matrizes com tamanhos  diferentes, impossível realizar soma.");
}else{
printf("resultado da soma das matrizes:\n\n");
for(int  i = 0; i < b; i++){
   printf("%d\n", e[i]);
}
}

return 0;
}
