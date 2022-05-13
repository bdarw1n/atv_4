#include <stdio.h>

int busca (int *v, int n){
int max, min;
max = min = v[0];

for(int i = 0; i < n; i++){
    if(v[i] > max ){
        max = v[i];
    }else if (v[i]< min){
     min = v[i];
    }else{
     max = min = v[i];
    }
}
return max + min;
}


int main () {
int n;
printf("Quantidade de elementos: ");
scanf("%d", &n);
printf("\n\n");
int v[n];
if(n ==0){
   printf("Elemento inválido");
   printf("\n\n");
   main();
 }
printf("\n\n");
int cnt = 1;
for (int i= 0; i < n; i++){
    printf("elemento %d:", cnt);
    scanf("%d", &v[i]);
    printf("\n");
    cnt++;
}
int soma = busca(v,n);

return soma;
}
