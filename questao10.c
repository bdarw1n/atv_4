#include <stdio.h>

void print (int a[]){
int *ptr =  &a[0];
for(int i = 0; i<5; i++){
   printf("%d\n", 2 * (*ptr));
   ptr++;
}
}

int main (){

int a[5] = {1,2,3,4,5};
print (a);
return 0;
}
