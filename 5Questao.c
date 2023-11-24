#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int codigo;
    char nome[50][200];
    int i = 0;
    int j;
    float preco[50];
    int quantidade[50];
    float vendascalculo = 0;

    printf("MENU\n");
    printf("1. ADICIONAR UM PRODUTO\n");
    printf("2. SAIR DO MENU\n\n");
    printf("escolha uma opção: ");
    scanf("%d", &codigo);
    system("cls || clear");

    while (codigo != 2){

        fflush(stdin);
        printf("Nome: ");
        gets(nome[i]);
        printf("Preço: ");
        scanf("%f", &preco[i]);
        printf("Quantidade: ");
        scanf("%d", &quantidade[i]);

        printf("Digite 2 para sair do menu ou 1 para continuar adicionando produtos: ");
        scanf("%d", &codigo);
        system("CLS || clear");
        i++;

    }

    for (j = 0; j < i; j++){
        vendascalculo = (float) vendascalculo + preco[j] * quantidade[j];
    }

    printf("TOTAL DE VENDAS: R$%.2f", vendascalculo);
    

    

    return 0;
}