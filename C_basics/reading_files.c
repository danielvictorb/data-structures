#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[10];
    int idade;
    FILE *arq;
    arq = fopen("test.txt", "r");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo");
        return 0;
    } else {
        printf("Arquivo aberto\n");
    }
    for (int i = 0; i < 6; i++) {
        fscanf(arq, "%s", nome);
        fscanf(arq, "%d", &idade);
        printf("%s\n", nome);
        printf("%d\n", idade);
    }
    fclose(arq);
    return 0;
}