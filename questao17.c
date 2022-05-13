#include <stdio.h>

void fun (float a, float * fracao, float *intg ){
printf("%2.2f\n", a);

}


int main (){
float a = 12.5;
fun (a, &a, &a);


return 0;
}
