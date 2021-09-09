#include <stdio.h>

int main(){
//variaveis
    int dia, mes, ano, dia2, mes2, ano2;

//entrada
    printf("Primeira Data.\n");
    printf("\nInsira o dia:\n");
    scanf("%f", &dia);
    printf("Insira o mes:\n");
    scanf("%f", &mes);
    printf("Insira o ano:\n");
    scanf("%f", &ano);

    printf("\nSegunda Data.\n");
    printf("\nInsira o dia:\n");
    scanf("%f", &dia2);
    printf("Insira o mes:\n");
    scanf("%f", &mes2);
    printf("Insira o ano:\n");
    scanf("%f", &ano2);

//saida
    
    if (dia < dia2 && mes<mes2){
        if(ano < ano2)
        printf("%2.0f""/""%2.0f""/""%4.0f", dia, mes, ano);
        else
        printf("Não é uma data válida.");
    }    
    return 0;
}