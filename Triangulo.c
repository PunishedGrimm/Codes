#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, cal, area;

    printf("Escreva o primeiro valor:\n");
    scanf("%f", &a);
    printf("Escreva o segundo valor:\n");
    scanf("%f", &b);
    printf("Escreva o terceiro valor:\n");
    scanf("%f", &c);

    if ((a == b) && (a == c)){
        printf("Esse é um triangulo Equilátero\n.");
    }if ((a == b) && (a != c) ){
        printf("Esse é um triangulo Isóceles\n.");
    }else{
        printf("Esse é um triangulo Escaleno\n.");
    }

    cal = ((a + b + c) / 2);
    area = sqrt(cal)*(cal - a)+(cal - b)+(cal - c);

    printf("A área do triângulo é de %.2f", area);
    return 0;
}