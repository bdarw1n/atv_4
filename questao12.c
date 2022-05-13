#include <stdio.h>

int  ordenar (int *a, int *b,int *c){

if (*a == *b && *b == *c){
    return 1;
}else{
int v[3];
v[0] = *a;
v[1]= *b;
v[2] = *c;
int m ;
for (int i = 0; i < 2; i++){
   for(int j = 0; j < 2; j ++){
     if (v[j]> v[j + 1]){
        int aux = v[j];
        v[j] = v[j+1];
        v[j+1]= aux;
     }
   }

}
*a = v[0];
*b = v[1];
*c = v[2];

return  0;
}
}

int main () {
int a, b, c;


printf("Digite o primeiro valor: ");scanf("%d", &a);printf("\n");
printf("Digite o segundo valor: ");scanf("%d", &b);printf("\n");
printf("Digite o terceiro valor: ");scanf("%d", &c);printf("\n");
int confere = ordenar (&a,&b,&c);
if (confere == 1){
   return  printf("todos os valores são iguais, não há necessidade de ordemação.");
} else{
return printf("%d, %d, %d.", a,b,c);}
}


