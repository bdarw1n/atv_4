#include <stdio.h>
void print (int *a, float *b, char*c);
void change (int *a, float *b, char*c);

int main ()
{
  int a;
  float b;
  char c;
  printf ("Número inteiro: ");scanf("%d", &a);printf("\n");
  printf ("Número float: ");scanf("%f", &b);printf("\n");
  printf ("letra: ");fflush(stdin);scanf("%c", &c);printf("\n");
  print (&a,&b,&c);
  change(&a,&b,&c);
  print (&a,&b,&c);
  return 0;
}

void print (int *a, float *b, char *c){
 printf ("inteiro: %d",  *a);printf("\n");
 printf ("float: %2.2f", *b);printf("\n");
 printf ("char: %c", *c);printf("\n");
}
 void change (int *a, float *b, char *c){
 int aa;
 float bb;
 char cc;
  printf ("mude o número inteiro %d: ", *a);scanf("%d", &aa);printf("\n");
  printf ("Número float %2.2f: ", *b);scanf("%f", &bb);printf("\n");
  printf ("letra %c : ", *c);fflush(stdin);scanf("%c", &cc);printf("\n");
  *a = aa;
  *b = bb;
  *c = cc;
 }

