#include <stdio.h>


int main (){
int a,  b;
int  *pa = a;
int *pb = b;
printf("Digite um número inteiro: ");scanf("%d", &a);printf("\n");
printf("Digite outro inteiro: ");scanf("%d", &b);
if (pa > pb){return pa;}
return pb;
}
