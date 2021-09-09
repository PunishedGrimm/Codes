#include <stdio.h>

int main(){

//variaveis
    int idade, cont;
    char sexo;

//entrada
    printf("Insira seu Sexo, M ou F:\n");
    scanf("%c", &sexo);
    printf("Insira sua Idade:\n");
    scanf("%d", &idade);
    printf("Insira seu tempo de contribuição:\n");
    scanf("%d", &cont);


//saida
    if (sexo == 'M'  && idade >= 65 && cont >=10){
        printf("Aposentável.");
    }
    else if (sexo == 'M' && idade >= 63 && cont >=15){
        printf("Aposentável.");
    }
    else if (sexo == 'F' && idade >= 63 && cont >=10){
        printf("Aposentável.");
    }
    else if (sexo == 'F' && idade >= 61 && cont >=15){
        printf("Aposentável.");
    }
    else{
        printf("Não Aposentável.");
    }

    return 0;
}