#include <stdio.h>

int main(){
    
    int n1, n2 ,n3;

    printf("Insira o Primeiro número:\n");
    scanf("%d", &n1);
    printf("Insira o Segundo número:\n");
    scanf("%d", &n2);
    printf("Insira o Terceiro número\n");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3){
        if (n2 < n3)
            printf("%d - %d - %d", n1, n2, n3);
        else 
            printf("%d - %d - %d", n1, n3, n2);
    }
    if (n2 < n1 && n2 < n3){
        if (n1 < n3)
            printf("%d - %d - %d", n2, n1, n3);
        else 
            printf("%d - %d - %d", n2, n3, n1);
    }
    if (n3 < n1 && n3 < n2){
        if (n1 < n2)
            printf("%d - %d - %d", n3, n1, n2);
        else 
            printf("%d - %d - %d", n3, n2, n1);
    }

    return 0;
}