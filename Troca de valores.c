#include <stdio.h>

int main(){

    int x, y, a;

    printf("Escreva um valor inteiro para x: \n");
    scanf("%d", &x);
    printf("Escreva um valor inteiro para y: \n");
    scanf("%d", &y);

    a = x;
    x = y;
    y = a;

    printf("Resultado de x :\n%d", x);
    printf("\nResultado de y :\n%d", y);

    return 0;
}