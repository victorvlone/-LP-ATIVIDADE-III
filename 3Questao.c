#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    char numeros[99][100];
    int codigo, i, cont = 0;
    char nomes[99][200];
 

    printf("Digite 1 para cadastrar alguem na sua lista telefonica ou 2 para mostrar os n�meros cadastrados: ");
    scanf("%d", &codigo);
    system("cls || clear");

        while (codigo != 2){
            fflush(stdin);
            printf("Nome: ");
            gets(nomes[cont]);
            printf("N�mero: ");
            gets(numeros[cont]);   

            printf("\nDigite 1 para cadastrar alguem na sua lista telefonica ou 2 para mostrar os n�meros cadastrados: ");
            scanf("%d", &codigo);
            system("cls || clear");
            cont++;
        }    

    printf("LISTA DE N�MEROS CADASTRADOS:\n\n");
    for (i = 0; i < cont; i++){
        printf("Nome: %s\n", nomes[i]);
        printf("N�mero: %s\n\n", numeros[i]); 
    }

    return 0;
}