#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int Notas[3];
    int i;
    float media;
    float soma;

    for ( i = 0; i < 4; i++) {
        printf("Digite um %dº Nota:",i + 1);
        scanf("%d", &Notas[i]);
    }
    
    system("cls || clear");

    for ( i = 0; i < 4; i++){
        printf("%dº Nota: %dº \n", i + 1, Notas[i]);
    }


    for ( i = 0; i < 4; i++){
        soma += Notas[i];
    }
    
    media = soma / i;

        if (media >= 7) {
        printf("Aprovado!\n");
    }
        else if (media >= 5){
        printf("Recuperação\n");
    } 
        else{
     printf("Reprovado\n");
    }
    
  
    
    printf("Média: %.1f \n", media);
    return 0;
}