#include <stdio.h>

int main(){
   //variaveis
    int ano;
   //entrada e saida
    printf("Insira um ano:\n");
    scanf("%d", &ano);
   //função
    if (ano %4 ==0){
        printf("O ano é Bissexto.");
    }else{
        printf("O ano não é Bissexto.");
    }

    return 0;
}