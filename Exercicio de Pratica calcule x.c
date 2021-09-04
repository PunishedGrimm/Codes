#include <stdio.h>
#include <math.h>

 int main(){
    float n1;
    float raizQ, quad, div, x;

    printf("Escreva um número:\n");
    scanf("%f", &n1);

    raizQ = sqrt(n1);
    quad = pow(n1, 2);
    div = (n1/2);
    x = (raizQ + div + quad);

    printf("O resultado do calculo é :%.2f", x);

    return 0;
 }