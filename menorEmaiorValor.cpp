#include <stdio.h>

#define TAM 5 //cria uma constante

int main() {
    int vet[TAM], i, maior, posMaior, menor, posMenor;

    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet[i]);
    }

    //maior valor
    maior    = vet[0];
    posMaior = 0;
    for (i = 1; i < TAM; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
            posMaior = i;
        }
    }

    //menor valor
    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < TAM; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }

    printf("\nMaior valor: %i - posicao: %i", maior, posMaior+1);
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);

    return 0;
}