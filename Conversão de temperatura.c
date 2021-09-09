#include <stdio.h>

int main(){

    float c, f, _f, _c;

    printf("Insira a temperatura em Celsius: \n");
    scanf("%f", &c);
    printf("Insira a temperatura em Fahrenheit: \n");
    scanf("%f", &_f);

    if(c <= 100){
        f = 1.8 * c + 32;
        printf(" A temperatura em Fahrenheit é de \n%.1f", f);
    }if(_f <= 212){
        _c = (_f - 32)/1.8;
        printf("\nA temperatura em Celsius é de \n%.1f",_c);
    }else{
        printf("\nEssa não é uma temperatura válida.");
    }

    return 0;
}