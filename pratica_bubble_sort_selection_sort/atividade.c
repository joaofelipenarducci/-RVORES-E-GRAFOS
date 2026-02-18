#include <stdio.h>
#include <time.h>

#define MAX 10000

long long comparacoes;
long long movimentacoes;

void preencherDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = tamanho - i;
    }
}

void bubbleSort(int vetor[], int tamanho) {
    int temp;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {

            comparacoes++;

            if (vetor[j] > vetor[j + 1]) {

                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

                movimentacoes++;
            }
        }
    }
}

void selectionSort(int vetor[], int tamanho) {

    int min, temp;

    for (int i = 0; i < tamanho - 1; i++) {

        min = i;

        for (int j = i + 1; j < tamanho; j++) {

            comparacoes++;

            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }

        if (min != i) {

            temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;

            movimentacoes++;
        }
    }
}

void testar(char nome[], void (*algoritmo)(int[], int), int tamanho) {

    int vetor[MAX];

    preencherDecrescente(vetor, tamanho);

    comparacoes = 0;
    movimentacoes = 0;

    clock_t inicio = clock();

    algoritmo(vetor, tamanho);

    clock_t fim = clock();

    double tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("%-15s %-10d %-15.2f %-15lld %-15lld\n",
           nome, tamanho, tempo_ms, comparacoes, movimentacoes);
}

int main() {

    printf("\n%-15s %-10s %-15s %-15s %-15s\n",
           "Algoritmo", "Tamanho", "Tempo(ms)", "Comparacoes", "Movimentacoes");

    printf("--------------------------------------------------------------------------\n");

    testar("Bubble Sort", bubbleSort, 100);
    testar("Bubble Sort", bubbleSort, 1000);
    testar("Bubble Sort", bubbleSort, 10000);

    testar("Selection Sort", selectionSort, 100);
    testar("Selection Sort", selectionSort, 1000);
    testar("Selection Sort", selectionSort, 10000);

    return 0;
}