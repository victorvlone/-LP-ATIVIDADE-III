#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    char nomes[2][200];
    int idades[2];
    float pesos[2];
    float alturas [2];
    int i;
    float MaiorValor[3] = {0, 0 ,0};
    float MenorValor[3] = {999, 999, 999};
    char nomeMaisAlto[3][200];
    char nomeMaisBaixo[3][200];

    for (i = 0; i < 2; i++){
        fflush(stdin);
        printf("DADOS DA %dª PESSOA:\n\n", i+1);
        printf("Nome: ");
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Peso: ");
        scanf("%f", &pesos[i]);
        printf("Altura: ");
        scanf("%f", &alturas[i]);
        system("cls || clear");
    }

    for (i = 0; i < 2; i++){

        if (alturas[i] > MaiorValor[0]){
            MaiorValor[0] = alturas[i];
            strcpy(nomeMaisAlto[0], nomes[i]);
        }
        if (alturas[i] < MenorValor[1]){
            MenorValor[0] = alturas[i];
            strcpy(nomeMaisBaixo[0], nomes[i]);
        }
       
    }

    for (i = 0; i < 2; i++){

        if (pesos[i] > MaiorValor[1]){
            MaiorValor[1] = pesos[i];
            strcpy(nomeMaisAlto[1], nomes[i]);
        }
        if (pesos[i] < MenorValor[1]){
            MenorValor[1] = pesos[i];
            strcpy(nomeMaisBaixo[1], nomes[i]);
        }
       
    }

    for (i = 0; i < 2; i++){

        if (idades[i] > MaiorValor[2]){
            MaiorValor[2] = idades[i];
            strcpy(nomeMaisAlto[2], nomes[i]);
        }
        if (idades[i] < MenorValor[2]){
            MenorValor[2] = idades[i];
            strcpy(nomeMaisBaixo[2], nomes[i]);
        }
       
    }
    system("cls || clear");
       
    printf("PESSOA MAIS ALTA\n\n");
    printf("Nome: %s\n", nomeMaisAlto[0]);
    printf("Altura: %.2fm\n\n", MaiorValor[0]);

    printf("PESSOA MAIS BAIXA\n\n");
    printf("Nome: %s\n", nomeMaisBaixo[0]);
    printf("Altura: %.2fm\n\n", MenorValor[0]);

    printf("PESSOA MAIS GORDA\n\n");
    printf("Nome: %s\n", nomeMaisAlto[1]);
    printf("Peso: %.1fkg\n\n", MaiorValor[1]);

    printf("PESSOA MAIS MAGRA\n\n");
    printf("Nome: %s\n", nomeMaisBaixo[1]);
    printf("Peso: %.1fkg\n\n", MenorValor[1]);

    printf("PESSOA MAIS VELHA\n\n");
    printf("Nome: %s\n", nomeMaisBaixo[2]);
    printf("idade: %.f\n\n", MenorValor[2]);

    printf("PESSOA MAIS NOVA\n\n");
    printf("Nome: %s\n", nomeMaisBaixo[2]);
    printf("idade: %.f\n\n", MenorValor[2]);

    return 0;
}