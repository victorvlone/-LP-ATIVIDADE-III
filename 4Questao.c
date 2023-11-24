#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int par = 0, impar = 0;
    int menor = 1000;
    int maior = 0;
    int contImpar = 0;
    int contNegativo = 0;

    for (i = 0; i < 5; i++){

        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0){
            par += numeros[i];
        } else{
            impar += numeros[i];
            contImpar++;
        }

        if (numeros[i] > maior){
            maior = numeros[i];
        }
        if (numeros[i] < menor){
            menor = numeros[i];
        }  

        if(numeros[i] < 0){
            contNegativo++;
        }

    }


    printf("\nQuantidade de n�meros impares: %d", contImpar);

    printf("\nQuantidade de n�meros negativos: %d", contNegativo);

    printf("\nMaior n�mero digitado: %d", maior);
    printf("\nMenor n�mero digitado: %d", menor);

    float mediaImpar = (float) impar / 5;
    float mediaPar = (float) par / 5;
    printf("\nM�dia de n�meros pares: %.2f", mediaPar);

    printf("\nM�dia total dos n�meros: %.2f", mediaImpar + mediaPar);

    return 0;
}